#include "find_common_characters.h"

namespace FindCommonCharacters {
	vector<string> commonChars(vector<string>& words) {
		vector<char> freq(26, 0);
		for (const auto& c : words[0]) {
			freq[c - 'a'] += 1;
		}

		for (int i = 1; i < words.size(); i++) {
			vector<char> curr(26, 0);
			for (const auto& c : words[i]) {
				curr[c - 'a'] += 1;
			}

			for (int i = 0; i < freq.size(); i++) {
				freq[i] = min(freq[i], curr[i]);
			}
		}

		vector<string> result;
		for (int i = 0; i < freq.size(); i++) {
			char c = 'a' + i;
			string cStr(1, c);
			while (freq[i]-- > 0) {
				result.push_back(cStr);
			}
		}

		return result;
	}
}