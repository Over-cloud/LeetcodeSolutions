#include "boats_to_save_peoople.h"

#include <algorithm>

namespace BoatsToSavePeople {
	int numRescueBoats(vector<int>& people, int limit) {
		sort(people.begin(), people.end());

		int duo = 0;
		for (int idx = people.size() - 1; idx > duo; idx--) {
			if (people[duo] + people[idx] <= limit) {
				duo++;
			}
		}

		return people.size() - duo;
	}
}