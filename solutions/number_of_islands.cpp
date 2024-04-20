#include "number_of_islands.h"

// public
int NumberOfIslands::numIslands(vector<vector<char>>& grid) {
    int result = 0;

    for (int row = 0; row < grid.size(); row++) {
        for (int col = 0; col < grid[row].size(); col++) {
            if (grid[row][col] == ISLAND) {
                result += 1;
                markVisited(grid, row, col);
            }
        }
    }

    return result;
}

// private
void NumberOfIslands::markVisited(vector<vector<char>>& grid, int row, int col) {
    vector<pair<int, int>> stack;
    stack.push_back({ row, col });

    while (!stack.empty()) {
        auto p = stack.back();
        stack.pop_back();

        row = p.first;
        col = p.second;
        grid[row][col] = VISITED;
        if (row > 0 && grid[row - 1][col] == ISLAND) stack.push_back({ row - 1, col });
        if (row < grid.size() - 1 && grid[row + 1][col] == ISLAND) stack.push_back({ row + 1, col });
        if (col > 0 && grid[row][col - 1] == ISLAND) stack.push_back({ row, col - 1 });
        if (col < grid[row].size() - 1 && grid[row][col + 1] == ISLAND) stack.push_back({ row, col + 1 });
    }
}