#include "special_array.h"

#include <algorithm>

namespace SpecialArray {
	int specialArray(vector<int>& nums) {
		sort(nums.begin(), nums.end());

		int len = nums.size(), idx = 0;
		while (idx < len && len - idx > nums[idx]) {
			idx += 1;
		}
		int prev = idx > 0 ? nums[idx - 1] : 0;
		return len - idx > prev ? len - idx : -1;
	}
}
