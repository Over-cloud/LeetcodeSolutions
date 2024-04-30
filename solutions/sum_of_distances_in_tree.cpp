#include "sum_of_distances_in_tree.h"

#include <iostream>

namespace SumOfDistancesInTree {
	// fields
	static int SUM = -1;

	vector<int> sumOfDistancesInTree(int n, vector<vector<int>>& edges) {
		if (n == 0) return {};

		unordered_map<int, unordered_map<int, pair<int, int>>> tree;
		build(edges, tree);

		vector<int> result;
		for (int node = 0; node < n; node++) {
			unordered_set<int> visited;
			visited.insert(node);
			visited.insert(SUM);
			auto pair = compute(node, tree, visited);
			tree[node][SUM] = pair;
			result.push_back(pair.first);
		}

		return result;
	}

	// helpers
	void build(const vector<vector<int>>& edges, unordered_map<int, unordered_map<int, pair<int, int>>>& tree) {
		for (auto& edge : edges) {
			int n1 = edge[0], n2 = edge[1];
			tree[n1][n2] = { -1, -1 };
			tree[n2][n1] = { -1, -1 };
		}
	}

	pair<int, int> compute(int curr, unordered_map<int, unordered_map<int, pair<int, int>>>& tree, unordered_set<int>& visited) {
		auto it = tree.find(curr);
		if (it == tree.end()) return { 0, 1 }; // single node tree

		int distSum = 0, nodeCnt = 0;
		for (auto& [next, currPair] : it->second) {
			if (visited.find(next) != visited.end()) continue;

			visited.insert(next);
			if (currPair.first == -1) {
				pair<int, int> nextPair;

				auto subSumIt = tree[next].find(SUM);
				auto revPair = tree[next][curr];
				if (subSumIt != tree[next].end() && revPair.first != -1) {
					auto subSum = subSumIt->second;
					nextPair = { subSum.first - revPair.first, subSum.second - revPair.second + 1 };
				} else {
					nextPair = compute(next, tree, visited);
				}

				currPair.first = nextPair.first + nextPair.second;
				currPair.second = nextPair.second + 1;
			}

			distSum += currPair.first;
			nodeCnt += currPair.second - 1;
		}

		return { distSum, nodeCnt + 1 }; // leaf nodes will give 0 edge and 1 node
	}
}