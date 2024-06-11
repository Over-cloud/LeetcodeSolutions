#include "relative_sort_array.h"

#include <unordered_map>
#include <algorithm>

namespace RelativeSortArray {
	vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
		unordered_map<int, int> freqMap;
		for (const auto& num : arr2) {
			freqMap.insert(make_pair(num, 0));
		}

		vector<int> other;
		for (const auto& num : arr1) {
			if (freqMap.find(num) != freqMap.end()) {
				freqMap[num] += 1;
			} else {
				other.push_back(num);
			}
		}

		vector<int> result;
		for (const auto& num : arr2) {
			while (freqMap[num] > 0) {
				result.push_back(num);
				freqMap[num] -= 1;
			}
		}
		sort(other.begin(), other.end());
		result.insert(result.end(), other.begin(), other.end());

		return result;
	}
}