#include "nth_tribonacci_number.h"

#include <vector>

namespace NthTribonacciNumber {
	int tribonacci(int n) {
		vector<int> dp = { 0,1,1 };

		if (n < dp.size()) {
			return dp[n];
		}

		int sum = 2;
		for (int i = 3; i < n; i += 1) {
			int next = sum - dp[i % 3] + sum;
			dp[i % 3] = sum;
			sum = next;
		}

		return sum;
	}
}
