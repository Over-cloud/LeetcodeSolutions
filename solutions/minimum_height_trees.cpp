#include "minimum_height_trees.h"

#include <iostream>
#include <algorithm>

namespace MinimumHeightTrees {
	vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
		if (edges.empty()) return { 0 };

		unordered_map<int, unordered_set<int>> map;
		buildMap(map, edges);

		unordered_set<int> visited;
		vector<int> depth(n, 0);
		findDepthRec(0, depth, map, visited);
		copy(depth.begin(), depth.end(), ostream_iterator<int>(cout, ", "));
		cout << endl;

		return middleNodes(depth, map);
	}

	// helpers
	void buildMap(unordered_map<int, unordered_set<int>>& map, vector<vector<int>>& edges) {
		for (auto& edge : edges) {
			map[edge[0]].insert(edge[1]);
			map[edge[1]].insert(edge[0]);
		}
	}

	int findDepthRec(int curr, vector<int>& depth, unordered_map<int, unordered_set<int>>& map, unordered_set<int>& visited) {
		visited.insert(curr);

		int maxDepth = -1;
		for (int next : map[curr]) {
			if (visited.find(next) == visited.end()) {
				maxDepth = max(maxDepth, findDepthRec(next, depth, map, visited));
			}
		}
		depth[curr] = maxDepth + 1;
		return depth[curr];
	}

	vector<int> middleNodes(vector<int>& depth, unordered_map<int, unordered_set<int>>& map) {
		int curr = 0, prevDepth = -1;
		vector<pair<int, int>> nextNodes = { { prevDepth, curr } };
		for (int node : map[curr]) {
			nextNodes.push_back({ depth[node], node });
		}
		sort(nextNodes.begin(), nextNodes.end(), greater<pair<int, int>>());
		
		while (nextNodes[0].first - nextNodes[1].first > 1) {
			depth[curr] = nextNodes[1].first + 1;
			curr = nextNodes[0].second;
			cout << "new curr: " << curr << "nexts: ";
			for (auto pair : nextNodes) cout << "(" << pair.first << "," << pair.second << "),";
			cout << endl;
			prevDepth = nextNodes[1].first + 1;
			nextNodes.clear();
			for (int node : map[curr]) {
				nextNodes.push_back({ depth[node], node });
			}
			sort(nextNodes.begin(), nextNodes.end(), greater<pair<int, int>>());
		}

		if (nextNodes[0].first == nextNodes[1].first) {
			return { curr };
		} else {
			return { curr, nextNodes[0].second };
		}
	}
}
