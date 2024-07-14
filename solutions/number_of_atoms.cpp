#include "number_of_atoms.h"

#include <vector>
#include <cctype>
#include <sstream>

namespace NumberOfAtoms {
	using namespace std;

	string countOfAtoms(string formula) {
		vector<int> mult(1, 1);
		int totalMult = 1;
		int singleMult = 1;

		map<string, int> map;

		for (int idx = formula.size() - 1; idx >= 0; idx--) {
			char curr = formula[idx];
			if (isdigit(curr)) {
				int cnt = parse_cnt(formula, idx);
				char next = formula[idx - 1];
				if (next == ')') {
					mult.push_back(cnt);
					totalMult *= cnt;
				} else {
					singleMult = cnt;
				}
			} else if (isalpha(curr)) {
				string name = parse_atom(formula, idx);
				map[name] += totalMult * singleMult;
				singleMult = 1;
			} else if (curr == '(' && mult.size() > 1) {
				totalMult /= mult.back();
				mult.pop_back();
			}
		}

		return map_to_string(map);
	}

	int parse_cnt(string formula, int& idx) {
		int len = 1;
		while (isdigit(formula[idx - 1])) {
			idx -= 1;
			len += 1;
		}
		return stoi(formula.substr(idx, len));
	}

	string parse_atom(string formula, int& idx) {
		int len = 1;
		while (islower(formula[idx])) {
			idx -= 1;
			len += 1;
		}
		return formula.substr(idx, len);
	}

	string map_to_string(map<string, int> map) {
		std::stringstream ss;
		for (const auto& [atom, cnt] : map) {
			ss << atom;
			if (cnt > 1) ss << cnt;
		}
		return ss.str();
	}
}