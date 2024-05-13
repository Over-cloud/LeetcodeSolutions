#include "score_after_flipping_matrix.h"

namespace ScoreAfterFlippingMatrix {
	using namespace std;

	int matrixScore(const vector<vector<int>>& grid) {
		int nRow = grid.size();
		int nCol = grid[0].size();

		int score = 0;
		vector<int> colSum(nCol, 0);

		for (const auto& row: grid) {
			int flip = row[0] == 0 ? 1 : 0;
			int power = 1;

			for (int i = nCol - 1; i >= 0; i--) {
				int bit = (row[i] + flip) % 2;
				colSum[i] += bit;
				score += bit * power;
				power = power << 1;
			}
		}

		int power = 1;
		for (int i = nCol - 1; i >= 0; i--) {
			if (colSum[i] * 2 < nRow) {
				score += (nRow - 2 * colSum[i]) * power;
			}
			power = power << 1;
		}

		return score;
	}
}