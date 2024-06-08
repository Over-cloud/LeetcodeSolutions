#include "replace_words.h"
#include "trie.h"

#include <sstream>
namespace ReplaceWords {
	string replaceWords(vector<string>& dictionary, string sentence) {
		Trie trie;
		for (const auto& str : dictionary) {
			trie.add(str);
		}

		string result;

		istringstream iss(sentence);
		string word;
		while (iss >> word) {
			auto prefix = trie.shortestPrefix(word);
			if (!result.empty()) {
				result += " ";
			}
			result += prefix.second;
		}

		return result;
	}
}
