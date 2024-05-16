#include "find_the_safest_path_in_the_grid.h"

#include <queue>
#include <iostream>
namespace FindTheSafestPathInTheGrid {
	using namespace std;

	int maximumSafenessFactor(vector<vector<int>>& grid) {
		int nRow = grid.size(), nCol = grid[0].size();
		vector<vector<int>> dist = computeDistance(grid);
		int startRow = 0, startCol = 0;
		int endRow = nRow - 1, endCol = nCol - 1;
		if (dist[startRow][startCol] == 0 || dist[endRow][endCol] == 0) {
			return 0;
		}

		vector<vector<int>> dp(nRow, vector<int>(nCol, -1));
		dp[startRow][startCol] = dist[startRow][startCol];

		queue<pair<int, int>> queue;
		queue.push({ startRow, startCol });
		while (!queue.empty()) {
			auto pair = queue.front();
			queue.pop();

			int row = pair.first, col = pair.second;
			if (row < nRow - 1) {
				// If unvisited, update next with min(curr, next)
				if (dp[row + 1][col] == -1) {
					dp[row + 1][col] = min(dp[row][col], dist[row + 1][col]);
					queue.push({ row + 1, col });

				// If visited, and curr > next && original(next) > next, then update next
				} else if (dp[row][col] > dp[row + 1][col] && dist[row + 1][col] > dp[row + 1][col]) {
					dp[row + 1][col] = min(dp[row][col], dist[row + 1][col]);
					queue.push({ row + 1, col });
				}
			}

			if (row > 0) {
				if (dp[row - 1][col] == -1) {
					dp[row - 1][col] = min(dp[row][col], dist[row - 1][col]);
					queue.push({ row - 1, col });
				} else if (dp[row][col] > dp[row - 1][col] && dist[row - 1][col] > dp[row - 1][col]) {
					dp[row - 1][col] = min(dp[row][col], dist[row - 1][col]);
					queue.push({ row - 1, col });
				}
			}

			if (col < nCol - 1) {
				if (dp[row][col + 1] == -1) {
					dp[row][col + 1] = min(dp[row][col], dist[row][col + 1]);
					queue.push({ row, col + 1 });
				} else if (dp[row][col] > dp[row][col + 1] && dist[row][col + 1] > dp[row][col + 1]) {
					dp[row][col + 1] = min(dp[row][col], dist[row][col + 1]);
					queue.push({ row, col + 1 });
				}
			}

			if (col > 0) {
				if (dp[row][col - 1] == -1) {
					dp[row][col - 1] = min(dp[row][col], dist[row][col - 1]);
					queue.push({ row, col - 1 });
				} else if (dp[row][col] > dp[row][col - 1] && dist[row][col - 1] > dp[row][col - 1]) {
					dp[row][col - 1] = min(dp[row][col], dist[row][col - 1]);
					queue.push({ row, col - 1 });
				}
			}

		}

		return dp[endRow][endCol];
	}

	vector<vector<int>> computeDistance(const vector<vector<int>>& grid) {
		int nRow = grid.size(), nCol = grid[0].size();
		vector<vector<int>> dist(nRow, vector<int>(nCol, -1));

		queue<pair<int, int>> queue;
		for (int row = 0; row < nRow; row++) {
			for (int col = 0; col < nCol; col++) {
				if (grid[row][col] == 1) {
					queue.push({ row, col });
					dist[row][col] = 0;
				}
			}
		}

		while (!queue.empty()) {
			auto pair = queue.front();
			queue.pop();

			int row = pair.first, col = pair.second;
			if (row < nRow - 1 && dist[row + 1][col] == -1) {
				dist[row + 1][col] = dist[row][col] + 1;
				queue.push({ row + 1, col });
			}

			if (row > 0 && dist[row - 1][col] == -1) {
				dist[row - 1][col] = dist[row][col] + 1;
				queue.push({ row - 1, col });
			}

			if (col < nCol - 1 && dist[row][col + 1] == -1) {
				dist[row][col + 1] = dist[row][col] + 1;
				queue.push({ row, col + 1 });
			}

			if (col > 0 && dist[row][col - 1] == -1) {
				dist[row][col - 1] = dist[row][col] + 1;
				queue.push({ row, col - 1 });
			}
		}

		return dist;
	}
}
