#pragma once

#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

namespace FreedomTrail {
	int findRotateSteps(string ring, string key);

	// helpers
	vector<vector<pair<int, int>>> build(string ring);
	int find(int pos, string ring, int idx, string key, vector<vector<pair<int, int>>>& lookup, unordered_map<int, int>& memo);
}
