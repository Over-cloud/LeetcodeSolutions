#include "pch.h"

#include "../solutions/minimum_height_trees.cpp"

namespace {
    TEST(MinimumHeightTreesTest, SingleNode) {
        int n = 1;
        vector<vector<int>> edges;
        vector<int> output = { 0 };
        EXPECT_EQ(output, MinimumHeightTrees::findMinHeightTrees(n, edges));
    }

    TEST(MinimumHeightTreesTest, Example1) {
        int n = 4;
        vector<vector<int>> edges = {
            {1, 0},
            {1, 2},
            {1, 3}
        };
        vector<int> output = { 1 };
        EXPECT_EQ(output, MinimumHeightTrees::findMinHeightTrees(n, edges));
    }

    TEST(MinimumHeightTreesTest, Example2) {
        int n = 6;
        vector<vector<int>> edges = {
            {3, 0},
            {3, 1},
            {3, 2},
            {3, 4},
            {5, 4}
        };
        vector<int> output = { 3, 4 };
        EXPECT_EQ(output, MinimumHeightTrees::findMinHeightTrees(n, edges));
    }
}
