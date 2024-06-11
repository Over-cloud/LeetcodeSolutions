#include "pch.h"

#include "../solutions/relative_sort_array.cpp"

namespace {
    using namespace RelativeSortArray;

    TEST(RelativeSortArrayTest, Example1) {
        vector<int> arr1 = { 2,3,1,3,2,4,6,7,9,2,19 };
        vector<int> arr2 = { 2,1,4,3,9,6 };
        vector<int> result = { 2,2,2,1,4,3,3,9,6,7,19 };
        EXPECT_EQ(result, relativeSortArray(arr1, arr2));
    }

    TEST(RelativeSortArrayTest, Example2) {
        vector<int> arr1 = { 28,6,22,8,44,17 };
        vector<int> arr2 = { 22,28,8,6 };
        vector<int> result = { 22,28,8,6,17,44 };
        EXPECT_EQ(result, relativeSortArray(arr1, arr2));
    }
}
