#include "reduce_number_to_one.h"

namespace ReduceNumberToOne {
	int numSteps(string s) {
		int steps = 0, carry = 0;
		for (int i = s.size() - 1; i > 0; i--) {
			steps += carry + (s[i] == '0' ? 1 : 0);

			if (carry == 0 && s[i] == '1') {
				carry = 1;
				steps += 2;
			}
		}

		if (carry == 0) {
			return steps;
		} else {
			return steps + 1;
		}
	}
}