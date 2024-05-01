#include "pch.h"

#include "../solutions/find_all_groups_of_farmland.cpp"

namespace {
    FindAllGroupsOfFarmland solution;

    TEST(FindAllGroupsOfFarmlandTest, EmptyGrid) {
        vector<vector<int>> emptyGrid;
        vector<vector<int>> expectedResult;
        EXPECT_EQ(expectedResult, solution.findFarmland(emptyGrid));
    }

    TEST(FindAllGroupsOfFarmlandTest, TwoFarmlands) {
        vector<vector<int>> twoFarmLands = {
            {1, 0, 0},
            {0, 1, 1},
            {0, 1, 1}
        };
        vector<vector<int>> expectedResult = {
            {0, 0, 0, 0},
            {1, 1, 2, 2}
        };
        EXPECT_EQ(expectedResult, solution.findFarmland(twoFarmLands));
    }

    TEST(FindAllGroupsOfFarmlandTest, EntireFarmland) {
        vector<vector<int>> entireFarmland = {
            {1, 1, 1},
            {1, 1, 1},
            {1, 1, 1}
        };
        vector<vector<int>> expectedResult = {
            {0, 0, 2, 2}
        };
        EXPECT_EQ(expectedResult, solution.findFarmland(entireFarmland));
    }

    TEST(FindAllGroupsOfFarmlandTest, NoFarmland) {
        vector<vector<int>> noFarmland = {
            {0, 0, 0},
            {0, 0, 0},
            {0, 0, 0}
        };
        vector<vector<int>> expectedResult;
        EXPECT_EQ(expectedResult, solution.findFarmland(noFarmland));
    }
}