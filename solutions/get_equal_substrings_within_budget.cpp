#include "get_equal_substrings_within_budget.h"

namespace GetEqualSubstringWithinBudget {
	int equalSubstring(string s, string t, int maxCost) {
		size_t size = s.size();
		size_t l = 0, r = 0, ssSize = 0;
		int cost = 0;
		while (r < size) {
			cost += abs(s[r] - t[r]);
			while (cost > maxCost) {
				cost -= abs(s[l] - t[l]);
				l += 1;
			}

			r += 1;
			ssSize = max(ssSize, r - l);
		}

		return static_cast<int>(ssSize);
	}
}
