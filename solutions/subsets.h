#pragma once

#include <vector>

//Description
//Given an integer array nums of unique elements, return all possible
//subsets
//(the power set).
//
//The solution set must not contain duplicate subsets.Return the solution in any order.

namespace Subsets {
	using namespace std;

	vector<vector<int>> subsets(vector<int>& nums);
}
