#include "pch.h"

#include "../solutions/single_number_III.cpp"

namespace {
    using namespace SingleNumberIII;

    TEST(SingleNumberIIITest, Example1) {
        vector<int> nums = { 1,2,1,3,2,5 };
        vector<int> expected = { 3,5 };
        sort(expected.begin(), expected.end());

        vector<int> actual = singleNumber(nums);
        sort(actual.begin(), actual.end());
        EXPECT_EQ(expected, actual);
    }
    using namespace SingleNumberIII;

    TEST(SingleNumberIIITest, Example2) {
        vector<int> nums = { -1,0 };
        vector<int> expected = { -1,0 };
        sort(expected.begin(), expected.end());

        vector<int> actual = singleNumber(nums);
        sort(actual.begin(), actual.end());
        EXPECT_EQ(expected, actual);
    }
}
