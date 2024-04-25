#include "longest_ideal_subsequence.h"

#include <vector>
#include <cstdlib>

#include <iostream>

namespace LongestIdealSubsequence {
	int longestIdealString(string s, int k) {
		constexpr int MAX = 26;
		vector<int> dp(MAX, 0);

		int result = 0;
		for (char c : s) {
			int idx = c - 'a';
			for (int i = max(0, idx - k); i < min(MAX, idx + k + 1); i++) {
				dp[idx] = max(dp[idx], dp[i]);
			}
			dp[idx] += 1;
			result = max(result, dp[idx]);
		}

		return result;
	}
}