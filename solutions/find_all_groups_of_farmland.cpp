#include "find_all_groups_of_farmland.h"

vector<vector<int>> FindAllGroupsOfFarmland::findFarmland(vector<vector<int>>& land) {
	vector<vector<int>> result;
	for (int row = 0; row < land.size(); row += 1) {
		for (int col = 0; col < land[row].size(); col += 1) {
			if (land[row][col] == FARMLAND) {
				vector<int> endPoint = getEndPoint(land, row, col);
				result.push_back({ row, col, endPoint[0], endPoint[1] });
			}
		}
	}

	return result;
}

vector<int> FindAllGroupsOfFarmland::getEndPoint(vector<vector<int>>& land, int startRow, int startCol) {
	land[startRow][startCol] = FARMLAND;

	int endRow = startRow;
	while (endRow + 1 < land.size() && land[endRow + 1][startCol] == FARMLAND) {
		endRow += 1;
		land[endRow][startCol] = VISITED;
	}

	int endCol = startCol;
	while (endCol + 1 < land[startRow].size() && land[startRow][endCol + 1] == FARMLAND) {
		endCol += 1;
		land[startRow][endCol] = VISITED;
	}

	for (int row = startRow + 1; row <= endRow; row += 1) {
		for (int col = startCol + 1; col <= endCol; col += 1) {
			land[row][col] = VISITED;
		}
	}

	return { endRow, endCol };
}
