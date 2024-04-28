#include "freedom_trail.h"

#include <iostream>
#include <iomanip>

namespace FreedomTrail {
	int findRotateSteps(string ring, string key) {
		if (key.empty() || ring.empty()) return 0;

		vector<vector<pair<int, int>>> lookup = build(ring);
		unordered_map<int, int> memo;
		return find(0, ring, 0, key, lookup, memo) + key.size();
	}

	vector<vector<pair<int, int>>> build(string ring) {
		int len = ring.size();
		vector<vector<pair<int, int>>> lookup(26, vector<pair<int, int>>(ring.size(), { -1, -1 }));
		for (int row = 0; row < 26; row++) {
			char c = 'a' + row;
			size_t first = ring.find_first_of(c);
			if (first == string::npos) continue;
			size_t last = ring.find_last_of(c);

			lookup[row][0].first = len - last;
			lookup[row][len - 1].second = first + 1;

			for (int col = 0; col < len; col++) {
				if (ring[col] == c) {
					lookup[row][col] = { 0, 0 };
				} else if (col > 0) {
					lookup[row][col].first = lookup[row][col - 1].first + 1;
				}
			}
			for (int col = len - 1; col >= 0; col--) {
				if (ring[col] != c && col < len - 1) {
					lookup[row][col].second = lookup[row][col + 1].second + 1;
				}
			}
		}

		return lookup;
	}

	int find(int pos, string ring, int idx, string key, vector<vector<pair<int, int>>>& lookup, unordered_map<int, int>& memo) {
		if (idx >= key.size()) {
			return 0;
		}
		int hash = pos * 100 + idx;
		if (memo.find(hash) != memo.end()) {
			return memo[hash];
		}

		int c = key[idx] - 'a';
		auto pair = lookup[c][pos];
		if (pair.first == 0 || pair.first + pair.second == ring.size()) {
			int nextPos = 0;
			int steps = 0;
			if (pair.first <= pair.second) {
				nextPos = pos - pair.first;
				if (nextPos < 0) nextPos += ring.size();
				steps += pair.first;
			} else {
				nextPos = pos + pair.second;
				if (nextPos >= ring.size()) nextPos -= ring.size();
				steps += pair.second;
			}
			memo[hash] = steps + find(nextPos, ring, idx + 1, key, lookup, memo);
			return memo[hash];
		} else {
			// take left
			int leftPos = pos - pair.first;
			if (leftPos < 0) leftPos += ring.size();
			int leftSteps = pair.first + find(leftPos, ring, idx + 1, key, lookup, memo);
			// take right
			int rightPos = pos + pair.second;
			if (rightPos >= ring.size()) rightPos -= ring.size();
			int rightSteps = pair.second + find(rightPos, ring, idx + 1, key, lookup, memo);

			memo[hash] = leftSteps < rightSteps ? leftSteps : rightSteps;
			return memo[hash];
		}
	}
}