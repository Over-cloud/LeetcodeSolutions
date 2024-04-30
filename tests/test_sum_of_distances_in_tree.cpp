#include "pch.h"

#include "../solutions/sum_of_distances_in_tree.cpp"

namespace {
    TEST(SumOfDistancesInTreeTest, EmptyTree) {
        int n = 0;
        vector<vector<int>> edges;
        vector<int> sumDist;
        EXPECT_EQ(sumDist, SumOfDistancesInTree::sumOfDistancesInTree(n, edges));
    }

    TEST(SumOfDistancesInTreeTest, Public1) {
        int n = 1;
        vector<vector<int>> edges = {};
        vector<int> sumDist{ 0 };
        EXPECT_EQ(sumDist, SumOfDistancesInTree::sumOfDistancesInTree(n, edges));
    }

    TEST(SumOfDistancesInTreeTest, Public2) {
        int n = 2;
        vector<vector<int>> edges = { {0, 1} };
        vector<int> sumDist = { 1,1 };
        EXPECT_EQ(sumDist, SumOfDistancesInTree::sumOfDistancesInTree(n, edges));
    }

    TEST(SumOfDistancesInTreeTest, Public3) {
        int n = 6;
        vector<vector<int>> edges = { {0, 1}, {0, 2}, {2, 3}, {2, 4}, {2, 5} };
        vector<int> sumDist = { 8, 12, 6, 10, 10, 10 };
        EXPECT_EQ(sumDist, SumOfDistancesInTree::sumOfDistancesInTree(n, edges));
    }

    TEST(SumOfDistancesInTreeTest, Public4) {
        int n = 4;
        vector<vector<int>> edges = { {0, 1}, {0, 2}, {0, 3} };
        vector<int> sumDist = { 3, 5, 5, 5 };
        EXPECT_EQ(sumDist, SumOfDistancesInTree::sumOfDistancesInTree(n, edges));
    }
}
