#include "pch.h"

#include "../solutions/largest_local_values_in_a_matrix.cpp"

namespace {
    using namespace LargestLocalValuesInMatrix;

    TEST(KthSmallestPrimeFractionTest, Example1) {
        vector<vector<int>> grid = {
            {9, 9, 8, 1},
            {5, 6, 2, 6},
            {8, 2, 6, 4},
            {6, 2, 2, 2}
        };
        vector<vector<int>> result = {
            { 9, 9 },
            { 8, 6 }
        };
        EXPECT_EQ(result, largestLocal(grid));
    }
}
