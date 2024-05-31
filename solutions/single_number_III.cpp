#include "single_number_III.h"

namespace SingleNumberIII {
	using namespace std;

	vector<int> singleNumber(vector<int>& nums) {
		int sum = 0;
		for (const auto& num : nums) {
			sum ^= num;
		}

		int mask = 1;
		while ((sum & mask) == 0) {
			mask = mask << 1;
		}

		int a = 0, b = 0;
		for (const auto& num : nums) {
			if ((num & mask) == 0) {
				a ^= num;
			} else {
				b ^= num;
			}
		}

		return { a, b };
	}
}