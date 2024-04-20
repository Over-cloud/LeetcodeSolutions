#include "pch.h"

#include "../solutions/number_of_islands.cpp"

namespace {

    NumberOfIslands solution;

    TEST(NumberOfIslandsTest, EmptyGrid) {
        vector<vector<char>> emptyGrid;
        NumberOfIslands solution;
        EXPECT_EQ(0, solution.numIslands(emptyGrid));
    }

    TEST(NumberOfIslandsTest, OneIsland) {
        vector<vector<char>> oneIsland = {
            {'1', '1', '1', '1', '0'},
            {'1', '1', '0', '1', '0'},
            {'1', '1', '0', '0', '0'},
            {'0', '0', '0', '0', '0'}
        };
        EXPECT_EQ(1, solution.numIslands(oneIsland));
    }

    TEST(NumberOfIslandsTest, ThreeIslands) {
        vector<vector<char>> threeIslands = {
            {'1', '1', '0', '0', '0'},
            {'1', '1', '0', '0', '0'},
            {'0', '0', '1', '0', '0'},
            {'0', '0', '0', '1', '1'}
        };
        EXPECT_EQ(3, solution.numIslands(threeIslands));
    }

}
