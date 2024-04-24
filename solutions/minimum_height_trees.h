#pragma once

#include <vector>
#include <unordered_map>
#include <unordered_set>

using namespace std;

namespace MinimumHeightTrees {
	vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges);

	// helpers
	void buildMap(unordered_map<int, unordered_set<int>>& map, vector<vector<int>>& edges);
	int findDepthRec(int curr, vector<int>& depth, unordered_map<int, unordered_set<int>>& map, unordered_set<int>& visited);
	vector<int> middleNodes(vector<int>& depth, unordered_map<int, unordered_set<int>>& map);
}