#include "subarray_sums_divisible_by_k.h"

#include <unordered_map>

namespace SubarraySumsDivisibleByK {
	int subarraysDivByK(vector<int>& nums, int k) {
		int result = 0;
		unordered_map<int, int> map;
		int sum = 0;
		map[0] = 1;
		for (const auto& num : nums) {
			sum = (sum + num) % k;
			if (sum < 0) {
				sum += k;
			}
			result += map[sum];
			map[sum] += 1;
		}
		return result;
	}
}
