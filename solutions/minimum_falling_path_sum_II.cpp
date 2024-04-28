#include "minimum_falling_path_sum_II.h"

#include <algorithm>

#include <iostream>

namespace MinimumPathSumII {
	int minFallingPathSum(vector<vector<int>>& grid) {
		size_t n = grid.size();
		if (n == 0) {
			return 0;
		}

		vector<int> minIdx = { -1, -1 };
		for (int col = 0; col < n; col++) {
			if (minIdx[0] < 0 || grid[0][col] < grid[0][minIdx[0]]) {
				minIdx[1] = minIdx[0];
				minIdx[0] = col;
			} else if (minIdx[1] < 0 || grid[0][col] < grid[0][minIdx[1]]) {
				minIdx[1] = col;
			}
		}

		for (int row = 1; row < n; row++) {
			vector<int> prevMin = minIdx;
			minIdx = { -1, -1 };
			for (int col = 0; col < n; col++) {
				if (col != prevMin[0]) { // select prev min
					grid[row][col] += grid[row - 1][prevMin[0]];
				} else { // select prev second min
					grid[row][col] += grid[row - 1][prevMin[1]];
				}

				if (minIdx[0] < 0 || grid[row][col] < grid[row][minIdx[0]]) {
					minIdx[1] = minIdx[0];
					minIdx[0] = col;
				} else if (minIdx[1] < 0 || grid[row][col] < grid[row][minIdx[1]]) {
					minIdx[1] = col;
				}
			}
		}

		return *min_element(grid.back().begin(), grid.back().end());
	}
}
