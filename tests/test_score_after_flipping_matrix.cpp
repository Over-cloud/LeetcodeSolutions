#include "pch.h"

#include "../solutions/score_after_flipping_matrix.cpp"

namespace {
    using namespace ScoreAfterFlippingMatrix;

    TEST(ScoreAfterFlippingMatrixTest, Example1) {
        vector<vector<int>> grid = { {0, 0, 1, 1}, {1, 0, 1, 0}, {1, 1, 0, 0} };
        int score = 39;
        EXPECT_EQ(score, matrixScore(grid));
    }

    TEST(ScoreAfterFlippingMatrixTest, Example2) {
        vector<vector<int>> grid = { {0} };
        int score = 1;
        EXPECT_EQ(score, matrixScore(grid));
    }

    TEST(ScoreAfterFlippingMatrixTest, Secret1) {
        vector<vector<int>> grid = { {0, 1, 1}, {1, 1, 1}, {0, 1, 0} };
        int score = 18;
        EXPECT_EQ(score, matrixScore(grid));
    }
}
