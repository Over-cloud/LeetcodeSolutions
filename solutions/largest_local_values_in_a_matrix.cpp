#include "largest_local_values_in_a_matrix.h"

namespace LargestLocalValuesInMatrix {
	vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
		if (grid.size() < 3 || grid[0].size() < 3) {
			return {};
		}

		vector<vector<int>> result(grid.size() - 2, vector<int>(grid[0].size() - 2, 0));
		for (int row = 0; row < result.size(); row++) {
			for (int col = 0; col < result[row].size(); col++) {
				int maxVal = 0;
				for (int i = row; i < row + 3; i++) {
					for (int j = col; j < col + 3; j++) {
						maxVal = max(maxVal, grid[i][j]);
					}
				}
				result[row][col] = maxVal;
			}
		}

		return result;
	}
}