#include "student_attendance_record_II.h"

#include <vector>
#include <numeric>
#include <utility>

namespace StudentAttendanceRecordII {
	int checkRecord(int n) {
		if (n == 1) {
			return 3;
		}
		vector<long long> currNoAbs = { 1, 1, 1 };
		vector<long long> currOneAbs = { 0, 0, 0 };

		const long long MOD = 1000000007;
		while (n-- > 2) {
			vector<long long> nextNoAbs = { 
				currNoAbs[0] + currNoAbs[1], currNoAbs[0] + currNoAbs[2], currNoAbs[0]
			};

			vector<long long> nextOneAbs = {
				currOneAbs[0] + currOneAbs[1] + currNoAbs[0],
				currOneAbs[0] + currOneAbs[2] + currNoAbs[0],
				currOneAbs[0] + currNoAbs[0]
			};

			if (n % 30 == 0) {
				for (int i = 0; i < currNoAbs.size(); i++) {
					currNoAbs[i] = move(nextNoAbs[i]) % MOD;
				}

				for (int i = 0; i < currOneAbs.size(); i++) {
					currOneAbs[i] = move(nextOneAbs[i]) % MOD;
				}
			} else {
				currNoAbs = move(nextNoAbs);
				currOneAbs = move(nextOneAbs);
			}
		}

		long long result = 0;
		result = currNoAbs[0] * 5 + currNoAbs[1] * 2 + currNoAbs[2];
		result += currOneAbs[0] * 2 + currOneAbs[1] + currOneAbs[2];

		return static_cast<int>(result % MOD);
	}
}
