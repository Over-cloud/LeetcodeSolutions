#include "word_break_II.h"

namespace WordBreakII {
	using namespace std;

	vector<string> wordBreak(string s, vector<string>& wordDict) {
		unordered_set<string> set(wordDict.begin(), wordDict.end());
		unordered_map<int, vector<string>> memo;
		return aux(s, 0, set, memo);
	}

	// Helper functions
	vector<string> aux(string s,
					   int curr,
					   const unordered_set<string>& set,
					   unordered_map<int, vector<string>>& memo) {

		if (curr == s.size()) {
			return { {} };
		}

		auto it = memo.find(curr);
		if (memo.find(curr) != memo.end()) {
			return it->second;
		}

		vector<string> result;
		for (int len = 1; len <= s.size() - curr; len++) {
			string currWord = s.substr(curr, len);
			if (set.find(currWord) != set.end()) {
				vector<string> breakList = aux(s, curr + len, set, memo);
				for (auto& breakString : breakList) {
					breakString = breakString.empty() ? currWord : currWord + " " + breakString;
					result.push_back(breakString);
				}
			}
		}

		memo[curr] = result;

		return result;
	}
}
