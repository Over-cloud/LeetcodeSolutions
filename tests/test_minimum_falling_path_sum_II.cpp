#include "pch.h"

#include "../solutions/minimum_falling_path_sum_II.cpp"

namespace {
    using namespace MinimumPathSumII;

    TEST(MinimumFallingPathSumIITest, EmptyGrid) {
        vector<vector<int>> grid;
        int total = 0;
        EXPECT_EQ(total, minFallingPathSum(grid));
    }

    TEST(MinimumFallingPathSumIITest, SingleElement) {
        vector<vector<int>> grid = { {7} };
        int total = 7;
        EXPECT_EQ(total, minFallingPathSum(grid));
    }

    TEST(MinimumFallingPathSumIITest, Example1) {
        vector<vector<int>> grid = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
        int total = 13;
        EXPECT_EQ(total, minFallingPathSum(grid));
    }

    TEST(MinimumFallingPathSumIITest, Secret1) {
        vector<vector<int>> grid = {
            {-73, 61, 43, -48, -36},
            {3, 30, 27, 57, 10},
            {96, -76, 84, 59, -15},
            {5, -49, 76, 31, -7},
            {97, 91, 61, -46, 67}
        };
        int total = -192;
        EXPECT_EQ(total, minFallingPathSum(grid));
    }

    TEST(MinimumFallingPathSumIITest, Secret2) {
        vector<vector<int>> grid = {
            {-37, 51, -36, 34, -22},
            {82, 4, 30, 14, 38},
            {-68, -52, -92, 65, -85},
            {-49, -3, -77, 8, -19},
            {-60, -71, -21, -62, -73}
        };
        int total = -268;
        EXPECT_EQ(total, minFallingPathSum(grid));
    }
}
