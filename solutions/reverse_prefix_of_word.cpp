#include "reverse_prefix_of_word.h";

namespace ReversePrefixOfWord {
	string reversePrefix(string word, char ch) {
		size_t pos = word.find_first_of(ch);
		if (pos != string::npos) {
			reverse(word.begin(), word.begin() + pos + 1);
		}

		return word;
	}
}
