#include "maximum_score_words_formed_by_letters.h"

namespace MaximumScoreWordsFormedByLetters {
	using namespace std;

	constexpr static int alphSize = 26;
	int maxScoreWords(vector<string>& words, vector<char>& letters, vector<int>& score) {
		vector<int> letterMap(alphSize, 0);
		for (const auto& c : letters) {
			letterMap[c - 'a'] += 1;
		}

		vector<vector<int>> wordMap(words.size(), vector<int>(alphSize));
		for (int i = 0; i < words.size(); i++) {
			for (const auto& c: words[i]) {
				wordMap[i][c - 'a'] += 1;
			}
		}

		return aux(wordMap, 0, letterMap, score, 0);
	}

	int aux(vector<vector<int>>& w, int i, vector<int>& l, const vector<int>& s, int p) {
		if (i == w.size()) {
			return p;
		}

		bool valid = true;
		for (int j = 0; j < l.size(); j++) {
			if (w[i][j] > l[j]) {
				valid = false;
				break;
			}
		}

		int maxP = 0;
		if (valid) {
			int q = 0;
			for (int j = 0; j < l.size(); j++) {
				l[j] -= w[i][j];
				q += s[j] * w[i][j];
			}
			maxP = aux(w, i + 1, l, s, p + q);
			for (int j = 0; j < l.size(); j++) {
				l[j] += w[i][j];
			}
		}

		maxP = max(maxP, aux(w, i + 1, l, s, p));

		return maxP;
	}
}
