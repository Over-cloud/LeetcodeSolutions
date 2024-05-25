#pragma once

#include <string>
#include <vector>
#include <unordered_set>
#include <unordered_map>

//Description
//Given a string s and a dictionary of strings wordDict, add spaces in s to construct a sentence where each word is a valid dictionary word.Return all such possible sentences in any order.
//
//Note that the same word in the dictionary may be reused multiple times in the segmentation.

namespace WordBreakII {
	using namespace std;

	vector<string> wordBreak(string s, vector<string>& wordDict);

	// Helper functions
	vector<string> aux(string s,
					   int curr,
					   const unordered_set<string>& set,
					   unordered_map<int, vector<string>>& memo);
}
