#include "pch.h"

#include "../solutions/longest_continuous_subarray.cpp"

namespace {
    using namespace LongestContinuousSubarrayWithAbsoluteDiffLessThanOrEqualToLimit;

    TEST(LongestContinuousSubarrayWithAbsoluteDiffLessThanOrEqualToLimitTest, Example1) {
        vector<int> nums = { 8,2,4,7 };
        int limit = 4;
        int maxLen = 2;
        EXPECT_EQ(maxLen, longestSubarray(nums, limit));
    }

    TEST(LongestContinuousSubarrayWithAbsoluteDiffLessThanOrEqualToLimitTest, Example2) {
        vector<int> nums = { 10,1,2,4,7,2 };
        int limit = 5;
        int maxLen = 4;
        EXPECT_EQ(maxLen, longestSubarray(nums, limit));
    }

    TEST(LongestContinuousSubarrayWithAbsoluteDiffLessThanOrEqualToLimitTest, Example3) {
        vector<int> nums = { 4,2,2,2,4,4,2,2 };
        int limit = 0;
        int maxLen = 3;
        EXPECT_EQ(maxLen, longestSubarray(nums, limit));
    }

    TEST(LongestContinuousSubarrayWithAbsoluteDiffLessThanOrEqualToLimitTest, Secret1) {
        vector<int> nums = { 4,10,2,6,1 };
        int limit = 10;
        int maxLen = 5;
        EXPECT_EQ(maxLen, longestSubarray(nums, limit));
    }

    TEST(LongestContinuousSubarrayWithAbsoluteDiffLessThanOrEqualToLimitTest, Secret2) {
        vector<int> nums = { 5,93,21,91,29,81,29,4,51,87,42,85 };
        int limit = 85;
        int maxLen = 8;
        EXPECT_EQ(maxLen, longestSubarray(nums, limit));
    }
}
