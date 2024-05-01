#include "reverse_prefix_of_word.h";

namespace ReversePrefixOfWord {
	string reversePrefix(string word, char ch) {
		size_t pos = word.find_first_of(ch);
		if (pos == string::npos) {
			return word;
		}

		string result = word.substr(0, pos + 1);
		reverse(result.begin(), result.end());
		result += word.substr(pos + 1, word.size() - pos - 1);

		return result;
	}
}
