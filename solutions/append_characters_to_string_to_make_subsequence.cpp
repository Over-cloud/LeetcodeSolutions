#include "append_characters_to_string_to_make_subsequence.h"

namespace AppendCharactersToStringToMakeSubsequence {
	int appendCharacters(string s, string t) {
		int sI = 0, tI = 0;
		while (sI < s.size() && tI < t.size()) {
			if (s[sI] == t[tI]) {
				tI++;
			}
			sI++;
		}

		return t.size() - tI;
	}
}
