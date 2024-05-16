#include "pch.h"

#include "../solutions/find_the_safest_path_in_the_grid.cpp"

namespace {
    using namespace FindTheSafestPathInTheGrid;

    TEST(FindTheSafestPathInTheGridTest, Example1) {
        vector<vector<int>> grid = {
            {1, 0, 0},
            {0, 0, 0},
            {0, 0, 1}
        };
        int maxSafeFactor = 0;
        EXPECT_EQ(maxSafeFactor, maximumSafenessFactor(grid));
    }

    TEST(FindTheSafestPathInTheGridTest, Example2) {
        vector<vector<int>> grid = {
            { 0, 0, 1 },
            { 0, 0, 0 },
            { 0, 0, 0 }
        };
        int maxSafeFactor = 2;
        EXPECT_EQ(maxSafeFactor, maximumSafenessFactor(grid));
    }

    TEST(FindTheSafestPathInTheGridTest, Example3) {
        vector<vector<int>> grid = {
            {0, 0, 0, 1},
            {0, 0, 0, 0},
            {0, 0, 0, 0},
            {1, 0, 0, 0}
        };
        int maxSafeFactor = 2;
        EXPECT_EQ(maxSafeFactor, maximumSafenessFactor(grid));
    }

    TEST(FindTheSafestPathInTheGridTest, Public1) {
        vector<vector<int>> grid = {
            {0, 0, 0, 0},
            {1, 1, 1, 0},
            {0, 0, 0, 0},
            {0, 1, 1, 1},
            {0, 0, 0, 0}
        };
        int maxSafeFactor = 1;
        EXPECT_EQ(maxSafeFactor, maximumSafenessFactor(grid));
    }

    TEST(FindTheSafestPathInTheGridTest, Public2) {
        vector<vector<int>> grid = {
            {0, 0, 0, 1},
            {0, 0, 1, 0},
            {0, 1, 0, 0},
            {1, 0, 0, 0}
        };
        int maxSafeFactor = 0;
        EXPECT_EQ(maxSafeFactor, maximumSafenessFactor(grid));
    }
}
