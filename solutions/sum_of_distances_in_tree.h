#pragma once

#include <vector>
#include <unordered_map>
#include <unordered_set>

using namespace std;

//There is an undirected connected tree with n nodes labeled from 0 to n - 1 and n - 1 edges.
//
//You are given the integer n and the array edges where edges[i] = [ai, bi] indicates that there is an edge between nodes ai and bi in the tree.
//
//Return an array answer of length n where answer[i] is the sum of the distances between the ith node in the tree and all other nodes.

namespace SumOfDistancesInTree {
	vector<int> sumOfDistancesInTree(int n, vector<vector<int>>& edges);

	// helpers
	void build(const vector<vector<int>>& edges, unordered_map<int, unordered_map<int, pair<int, int>>>& tree);
	pair<int, int> compute(int curr, unordered_map<int, unordered_map<int, pair<int, int>>>& tree, unordered_set<int>& visited);
}
