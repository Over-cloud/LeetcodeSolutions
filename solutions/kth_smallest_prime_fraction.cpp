#include "kth_smallest_prime_fraction.h"
#include <iostream>
#include <algorithm>

namespace KthSmallestPrimeFraction {
	using namespace std;

	vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
		size_t size = arr.size() * (arr.size() - 1) / 2;
		vector<pair<double, vector<int>>> sorted(size);

		int curr = 0;
		for (int i = 0; i < arr.size(); i++) {
			for (int j = i + 1; j < arr.size(); j++) {
				sorted[curr++] = { (double)arr[i] / arr[j], { arr[i], arr[j] } };
			}
		}

		partial_sort(sorted.begin(), sorted.begin() + k, sorted.end());

		return sorted[k - 1].second;
	}
}
