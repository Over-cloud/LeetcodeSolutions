#include "longest_palindrome.h"

#include <unordered_map>

namespace LongestPalindrome {
	int longestPalindrome(string s) {
		unordered_map<char, int> map;
		for (const auto& c : s) {
			map[c] += 1;
		}

		int single = 0;
		int len = 0;
		for (const auto& [_, v] : map) {
			len += v;
			if (v % 2 == 1) {
				single = 1;
				len -= 1;
			}
		}
		return len + single;
	}
}
