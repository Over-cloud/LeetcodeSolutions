#include "pch.h"

#include "../solutions/find_if_path_exists_in_graph.cpp"

namespace {

    FindIfPathExistsInGraph solution;

    TEST(FindIfPathExistsInGraphTest, SingleNode) {
        int n = 1;                 // node count: 0 ~ n - 1
        vector<vector<int>> edges; // node pairs
        int source = 0;            // starting node
        int destination = 0;       // target ending node
        EXPECT_TRUE(solution.validPath(n, edges, source, destination));
    }

    TEST(FindIfPathExistsInGraphTest, ExampleOne) {
        int n = 3;
        vector<vector<int>> edges = {
            {0, 1},
            {1, 2},
            {2, 0}
        };
        int source = 0;
        int destination = 2;
        EXPECT_TRUE(solution.validPath(n, edges, source, destination));
    }

    TEST(FindIfPathExistsInGraphTest, ExampleTwo) {
        int n = 6;
        vector<vector<int>> edges = {
        {0, 1},
        {0, 2},
        {3, 5},
        {5, 4},
        {4, 3}
        };
        int source = 0;
        int destination = 5;
        EXPECT_FALSE(solution.validPath(n, edges, source, destination));
    }
}