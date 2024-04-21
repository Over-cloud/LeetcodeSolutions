#include "find_if_path_exists_in_graph.h"

#include <unordered_map>
#include <unordered_set>
#include <queue>

#include <iostream>

bool FindIfPathExistsInGraph::validPath(int n, vector<vector<int>>& edges, int source, int destination) {
	cout << "entering FindIfPathExistsInGraph" << endl;
	unordered_map<int, vector<int>> map;
	for (auto edge : edges) {
		map[edge[0]].push_back(edge[1]);
		map[edge[1]].push_back(edge[0]);
	}

	unordered_set<int> visited;
	queue<int> queue;

	queue.push(source);
	visited.insert(source);

	while (!queue.empty()) {
		int curr = queue.front();
		cout << curr << endl;
		if (curr == destination) {
			return true;
		}
		queue.pop();

		for (auto next : map[curr]) {
			if (visited.find(next) == visited.end()) {
				queue.push(next);
				visited.insert(next);
			}
		}
	}

	return false;
}