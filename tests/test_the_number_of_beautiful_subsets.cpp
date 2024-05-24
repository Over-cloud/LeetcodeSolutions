#include "pch.h"

#include "../solutions/the_number_of_beautiful_subsets.cpp"

namespace {
    using namespace TheNumberOfBeautifulSubsets;

    TEST(TheNumberOfBeautifulSubsetsTest, Example1) {
        vector<int> nums = { 2,4,6,8 };
        int k = 2;
        int count = 4;
        EXPECT_EQ(count, beautifulSubsets(nums, k));
    }

    TEST(TheNumberOfBeautifulSubsetsTest, Example2) {
        vector<int> nums = { 1 };
        int k = 1;
        int count = 1;
        EXPECT_EQ(count, beautifulSubsets(nums, k));
    }
}
