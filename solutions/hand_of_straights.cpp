#include "hand_of_straights.h"

#include <algorithm>

namespace HandOfStraights {
	bool isNStraightHand(vector<int>& hand, int groupSize) {
		sort(hand.begin(), hand.end());
		vector<int> vals = { hand[0] };
		vector<int> cnts = { 1 };
		for (int i = 1; i < hand.size(); i++) {
			if (hand[i] == hand[i - 1]) {
				cnts[cnts.size() - 1] += 1;
			} else {
				vals.push_back(hand[i]);
				cnts.push_back(1);
			}
		}

		int curr = 0;
		while (curr < vals.size()) {
			if (cnts[curr] != 0 && !isCurrNStraightHand(curr, vals, cnts, groupSize)) {
				return false;
			}
			curr += 1;
		}

		return true;
	}

	bool isCurrNStraightHand(int curr, const vector<int>& vals, vector<int>& cnts, int groupSize) {
		if (curr + groupSize > vals.size()) {
			return false;
		}

		for (int i = curr + 1; i < curr + groupSize; i++) {
			if (vals[i] != vals[i - 1] + 1 || cnts[i] < cnts[curr]) {
				return false;
			}

			cnts[i] -= cnts[curr];
		}

		return true;
	}
}
