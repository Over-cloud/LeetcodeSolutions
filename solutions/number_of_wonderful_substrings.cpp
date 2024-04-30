#include "number_of_wonderful_substrings.h"

#include <vector>

namespace NumberOfWonderfulSubstrings {
	long long wonderfulSubstrings(string word) {
		int size = word.size();
		int mapSize = 1024;

		int freq = 0;
		vector<long> map(mapSize, 0);
		map[freq] = 1;

		for (int i = 0; i < size; i++) {
			int offset = word[i] - 'a';
			freq = freq ^ (1 << offset);
			map[freq] += 1;
		}

		long long totalCnt = 0;
		for (int i = 0; i < mapSize; i++) {
			if (map[i] == 0) continue;

			totalCnt += map[i] * (map[i] - 1) / 2;

			int mask = 1;
			while (mask < 1024) {
				int j = i ^ mask;
				totalCnt += map[i] * map[j];
				mask = mask << 1;
			}

			map[i] = 0;
		}

		return totalCnt;
	}
}

