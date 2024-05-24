#pragma once

#include <string>
#include <vector>

//Description
//Given a list of words, list of  single letters(might be repeating) and score of every character.
//
//Return the maximum score of any valid set of words formed by using the given letters(words[i] cannot be used two or more times).
//
//It is not necessary to use all characters in letters and each letter can only be used once.Score of letters 'a', 'b', 'c', ..., 'z' is given by score[0], score[1], ..., score[25] respectively.

namespace MaximumScoreWordsFormedByLetters {
	using namespace std;

	int maxScoreWords(vector<string>& words, vector<char>& letters, vector<int>& score);

	// Helper functions
	int aux(vector<vector<int>>& w, int i, vector<int>& l, const vector<int>& s, int p);
}

