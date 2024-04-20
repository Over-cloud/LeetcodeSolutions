#pragma once

#include <vector>

using namespace std;

class NumberOfIslands {
public:
    int numIslands(vector<vector<char>>& grid);

private:
    static constexpr char WATER = '0';
    static constexpr int ISLAND = '1';
    static constexpr int VISITED = '2';

private:
    void markVisited(vector<vector<char>>& grid, int row, int col);
};
