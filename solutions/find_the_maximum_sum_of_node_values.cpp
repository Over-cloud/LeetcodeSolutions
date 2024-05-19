#include "find_the_maximum_sum_of_node_values.h"

#include <algorithm>

namespace FindTheMaximumSumOfNodeValues {
	using namespace std;

	long long maximumValueSum(vector<int>& nums, int k, vector<vector<int>>& edges) {
		long long sum = 0;
		vector<int> diff(nums.size(), 0);

		for (int i = 0; i < nums.size(); i++) {
			sum += nums[i];
			diff[i] = (nums[i] ^ k) - nums[i];
		}

		sort(diff.begin(), diff.end());

		for (int i = diff.size() - 1; i > 0; i -= 2) {
			int partSum = diff[i] + diff[i - 1];
			if (partSum > 0) {
				sum += partSum;
			} else {
				break;
			}
		}

		return sum;
	}
}