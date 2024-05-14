#include "path_with_maximum_gold.h"
#include <iostream>
namespace PathWithMaximumGold {
	int getMaximumGold(vector<vector<int>>& grid) {
		int maxGold = 0;
		for (int row = 0; row < grid.size(); row++) {
			for (int col = 0; col < grid[row].size(); col++) {
				if (grid[row][col] > 0) {
					vector<vector<int>> visited(grid.size(), vector<int>(grid[0].size(), 0));
					maxGold = max(maxGold, getMaxGoldStartingAt(row, col, grid, visited));
				}
			}
		}
		return maxGold;
	}

	int getMaxGoldStartingAt(int row, int col, const vector<vector<int>>& grid, vector<vector<int>>& visited) {
		visited[row][col] = 1;

		int next = 0;
		if (row < grid.size() - 1 && visited[row + 1][col] == 0 && grid[row + 1][col] > 0) {
			next = max(next, getMaxGoldStartingAt(row + 1, col, grid, visited));
		}

		if (row > 0 && visited[row - 1][col] == 0 && grid[row - 1][col] > 0) {
			next = max(next, getMaxGoldStartingAt(row - 1, col, grid, visited));
		}

		if (col < grid[0].size() - 1 && visited[row][col + 1] == 0 && grid[row][col + 1] > 0) {
			next = max(next, getMaxGoldStartingAt(row, col + 1, grid, visited));
		}

		if (col > 0 && visited[row][col - 1] == 0 && grid[row][col - 1] > 0) {
			next = max(next, getMaxGoldStartingAt(row, col - 1, grid, visited));
		}

		visited[row][col] = 0;
		return next + grid[row][col];
	}
}