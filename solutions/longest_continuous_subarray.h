#pragma once

#include <vector>

//Description
//given an array of integers nums and an integer limit, return the size of the longest non - empty subarray such that the absolute difference between any two elements of this subarray is less than or equal to limit.

namespace LongestContinuousSubarrayWithAbsoluteDiffLessThanOrEqualToLimit {
	using namespace std;

	int longestSubarray(vector<int>& nums, int limit);
}
