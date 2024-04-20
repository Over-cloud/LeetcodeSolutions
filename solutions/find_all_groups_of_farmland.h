#pragma once

#include <vector>

using namespace std;

class FindAllGroupsOfFarmland {
public:
	vector<vector<int>> findFarmland(vector<vector<int>>& land);

private:
	static constexpr int FOREST = 0;
	static constexpr int FARMLAND = 1;
	static constexpr int VISITED = 2;

private:
	vector<int> getEndPoint(vector<vector<int>>& land, int startRow, int startCol);
};