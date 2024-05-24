#include "the_number_of_beautiful_subsets.h"
#include <iostream>
namespace TheNumberOfBeautifulSubsets {
	int beautifulSubsets(vector<int>& nums, int k) {
		vector<vector<int>> map(nums.size());
		for (int i = 0; i < nums.size(); i++) {
			for (int j = i + 1; j < nums.size();j++) {
				if (abs(nums[i] - nums[j]) == k) {
					map[i].push_back(j);
				}
			}
		}

		int maxCnt = pow(2, nums.size());

		int result = 0;
		for (int i = 1; i < maxCnt; i++) { // exclude empty set
			bool valid = true;
			for (int j = 0; j < nums.size(); j++) {
				if (i & (1 << j)) {
					for (auto k : map[j]) {
						if (i & (1 << k)) {
							valid = false;
						}
					}
					if (!valid) {
						break;
					}
				}
			}
			if (valid) {
				result += 1;
			}
		}

		return result;
	}
}