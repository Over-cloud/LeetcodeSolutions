#include "sum_of_all_subset_xor_totals.h"

namespace SumOfAllSubsetXorTotals {
	int subsetXORSum(vector<int>& nums) {
		int sum = 0;
		for (int i = 1; i <= nums.size(); i++) {
			sum += subsetSumOfSize(nums, 0, i, 0);
		}

		return sum;
	}

	int subsetSumOfSize(const vector<int>& nums, int currIdx, int setSize, int partialSum) {
		if (setSize == 0) {
			return partialSum;
		}

		int sum = 0;
		for (int i = currIdx; i <= nums.size() - setSize; i++) {
			sum += subsetSumOfSize(nums, i + 1, setSize - 1, partialSum ^ nums[i]);
		}

		return sum;
	}
}
