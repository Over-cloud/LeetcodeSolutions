#include "continuous_subarray_sum.h"

#include <unordered_map>

namespace ContinuousSubarraySum {
	bool checkSubarraySum(vector<int>& nums, int k) {
		unordered_map<int, int> map;
		map[0] = -1;

		int sum = 0;
		for (int i = 0; i < nums.size(); i++) {
			sum = (sum + nums[i]) % k;
			if (map.find(sum) == map.end()) {
				map[sum] = i;
			} else if (i - map[sum] > 1) {
				return true;
			}
		}
		return false;
	}
}