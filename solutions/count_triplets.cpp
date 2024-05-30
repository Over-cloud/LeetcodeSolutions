#include "count_triplets.h"

namespace CountTriplets {
	int countTriplets(vector<int>& arr) {
		int size = arr.size();
		if (size < 2) {
			return 0;
		}

		vector<int> prefSum(size, 0);
		prefSum[0] = arr[0];
		for (int i = 1; i < size; i++) {
			prefSum[i] = prefSum[i - 1] ^ arr[i];
		}

		int result = 0;
		for (int left = 0; left < size - 1; left++) {
			for (int right = left + 1; right < size; right++) {
				for (int mid = left + 1; mid <= right; mid++) {
					int leftSum = left == 0 ? prefSum[mid - 1] : prefSum[mid - 1] ^ prefSum[left - 1];
					int rightSum = prefSum[right] ^ prefSum[mid - 1];
					if (leftSum == rightSum) {
						result += 1;
					}
				}
			}
		}

		return result;
	}
}
