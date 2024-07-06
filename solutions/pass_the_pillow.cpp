#include "pass_the_pillow.h"

namespace PassThePillow {
	int passThePillow(int n, int time) {
		if (n == 1 || time == 0) {
			return 1;
		}

		int round = (n - 1) * 2;
		time = time % round;
		if (time < n) {
			return time + 1;
		}

		time -= n - 1;
		return n - time;
	}
}