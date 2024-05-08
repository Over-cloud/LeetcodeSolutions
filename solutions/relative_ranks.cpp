#include "relative_ranks.h"

#include <algorithm>
#include <iostream>

namespace RelativeRanks {
	vector<string> findRelativeRanks(vector<int>& score) {
		int size = score.size();

		vector<vector<int>> sorted;
		sorted.reserve(size);

		for (int i = 0; i < size; ++i) {
			sorted.emplace_back(vector<int>{score[i], i});
		}

		sort(sorted.begin(), sorted.end(), greater<vector<int>>());

		vector<string> result(size);
		if (size >= 1) {
			result[sorted[0][1]] = "Gold Medal";
		}
		if (size >= 2) {
			result[sorted[1][1]] = "Silver Medal";
		}
		if (size >= 3) {
			result[sorted[2][1]] = "Bronze Medal";
		}
		for (int i = 3; i < size; i++) {
			result[sorted[i][1]] = to_string(i + 1);
		}

		return result;
	}
}
