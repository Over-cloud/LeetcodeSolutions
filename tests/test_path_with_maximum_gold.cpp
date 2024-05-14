#include "pch.h"

#include "../solutions/path_with_maximum_gold.cpp"

namespace {
    using namespace PathWithMaximumGold;

    TEST(PathWithMaximumGoldTest, Example1) {
        vector<vector<int>> grid = {
            {0, 6, 0},
            {5, 8, 7},
            {0, 9, 0}
        };
        int maxGold = 24;
        EXPECT_EQ(maxGold, getMaximumGold(grid));
    }

    TEST(PathWithMaximumGoldTest, Example2) {
        vector<vector<int>> grid = {
            {1, 0, 7},
            {2, 0, 6},
            {3, 4, 5},
            {0, 3, 0},
            {9, 0, 20}
        };
        int maxGold = 28;
        EXPECT_EQ(maxGold, getMaximumGold(grid));
    }

    TEST(PathWithMaximumGoldTest, Secret2) {
        vector<vector<int>> grid = {
            {0, 0, 1},
            {1, 1, 0},
            {1, 1, 0},
        };
        int maxGold = 4;
        EXPECT_EQ(maxGold, getMaximumGold(grid));
    }

    //TEST(PathWithMaximumGoldTest, Public1) {
    //    vector<vector<int>> grid = {
    //        {1, 1, 1, 1, 1, 1},
    //        {1, 1, 1, 1, 1, 1},
    //        {1, 1, 1, 1, 1, 1},
    //        {1, 1, 1, 1, 1, 1},
    //        {1, 1, 1, 1, 1, 1},
    //    };
    //    int maxGold = grid.size() * grid[0].size();
    //    EXPECT_EQ(maxGold, getMaximumGold(grid));
    //}
}
