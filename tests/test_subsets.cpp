#include "pch.h"

#include "../solutions/subsets.cpp"

namespace {
    using namespace Subsets;

    TEST(SubsetsTest, Example1) {
        vector<int> nums = { 1, 2, 3 };
        vector<vector<int>> expected = {
            {},
            {1},
            {2},
            {1, 2},
            {3},
            {1, 3},
            {2, 3},
            {1, 2, 3}
        };
        sort(expected.begin(), expected.end());

        vector<vector<int>> actual = subsets(nums);
        sort(actual.begin(), actual.end());

        EXPECT_EQ(expected, actual);
    }

    TEST(SubsetsTest, Example2) {
        vector<int> nums = { 0 };
        vector<vector<int>> expected = { {}, {0} };
        sort(expected.begin(), expected.end());

        vector<vector<int>> actual = subsets(nums);
        sort(actual.begin(), actual.end());

        EXPECT_EQ(expected, actual);
    }
}
