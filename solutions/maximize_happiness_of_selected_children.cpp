#include "maximize_happiness_of_selected_children.h"

#include <algorithm>

namespace MaximizeHappinessOfSelectedChildren {
	using namespace std;

	long long maximumHappinessSum(vector<int>& happiness, int k) {
		partial_sort(happiness.begin(), happiness.begin() + k, happiness.end(), greater<int>());

		long long result = 0;
		for (int i = 0; i < k && happiness[i] > i; i++) {
			result += happiness[i] - i;
		}

		return result;
	}
}
