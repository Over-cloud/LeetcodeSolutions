#include "subsets.h"

namespace Subsets {
	using namespace std;

	vector<vector<int>> subsets(vector<int>& nums) {
		int size = nums.size();
		int powerSetSize = pow(2, size);
		vector<vector<int>> powerSet(powerSetSize);

		for (int i = 0; i < powerSetSize; i++) {
			vector<int> currSet;
			for (int j = 0; j < size; j++) {
				if (i & (1 << j)) {
					currSet.push_back(nums[j]);
				}
			}
			powerSet[i] = currSet;
		}

		return powerSet;
	}
}
