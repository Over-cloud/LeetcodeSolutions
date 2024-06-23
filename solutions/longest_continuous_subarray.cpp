#include "longest_continuous_subarray.h"

#include <algorithm>
#include <deque>

namespace LongestContinuousSubarrayWithAbsoluteDiffLessThanOrEqualToLimit {
	using namespace std;

	int longestSubarray(vector<int>& nums, int limit) {
		deque<int> min;
		deque<int> max;

		int minIdx = 0;
		int result = 0;
		for (int i = 0; i < nums.size(); i++) {
			while (!min.empty() && nums[i] < nums[min.back()]) {
				min.pop_back();
			}
			min.push_back(i);

			while (!max.empty() && nums[i] > nums[max.back()]) {
				max.pop_back();
			}
			max.push_back(i);

			while (nums[max.front()] - nums[min.front()] > limit) {
				if (max[0] < min[0]) {
					minIdx = max.front() + 1;
					max.pop_front();
				} else {
					minIdx = min.front() + 1;
					min.pop_front();
				}
			}

			result = std::max(result, i - minIdx + 1);
		}

		return result;
	}
}