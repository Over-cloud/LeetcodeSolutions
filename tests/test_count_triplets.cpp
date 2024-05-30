#include "pch.h"

#include "../solutions/count_triplets.cpp"

namespace {
    using namespace CountTriplets;

    TEST(CountTripletsTest, Example1) {
        vector<int> arr = { 2,3,1,6,7 };
        int count = 4;
        EXPECT_EQ(count, countTriplets(arr));
    }

    TEST(CountTripletsTest, Example2) {
        vector<int> arr = { 1,1,1,1,1 };
        int count = 10;
        EXPECT_EQ(count, countTriplets(arr));
    }
}
