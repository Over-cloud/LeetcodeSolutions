#include "minimum_operations_to_make_array_xor_equal_to_k.h"

namespace MinimumOperationsToMakeArrayXorEqualToK {
	int minOperations(vector<int>& nums, int k) {
		if (nums.size() == 0) return 0;

		int xorRes = nums[0];
		for (auto it = nums.begin() + 1; it != nums.end(); it++) {
			xorRes = xorRes ^ *it;
		}

		int cnt = 0;
		while (xorRes != k) {
			cnt += (xorRes & 1) != (k & 1);
			xorRes = xorRes >> 1;
			k = k >> 1;
		}

		return cnt;
	}
}

