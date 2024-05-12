#pragma once

#include <vector>

//Description
//You are given an n x n integer matrix grid.
//
//Generate an integer matrix maxLocal of size(n - 2) x(n - 2) such that :
//
//maxLocal[i][j] is equal to the largest value of the 3 x 3 matrix in grid centered around row i + 1 and column j + 1.
//In other words, we want to find the largest value in every contiguous 3 x 3 matrix in grid.
//
//Return the generated matrix.

namespace LargestLocalValuesInMatrix {
	using namespace std;

	vector<vector<int>> largestLocal(vector<vector<int>>& grid);
}

