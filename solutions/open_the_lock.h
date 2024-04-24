#pragma once

#include <vector>
#include <string>
#include <unordered_set>

using namespace std;

namespace OpenTheLock {
	int openLock(vector<string>& deadends, string target);
	
	// helpers
	char next(char d) {
		if (d == '9') return '0';
		return d + 1;
	}
	char prev(char d) {
		if (d == '0') return '9';
		return d - 1;
	}
	vector<string> getNext(string curr, const unordered_set<string> &visited) {
		vector<string> result;
		for (int i = 0; i < curr.size(); i++) {
			string copy = curr;
			copy[i] = next(curr[i]);
			if (visited.find(copy) == visited.end()) result.push_back(copy);

			copy[i] = prev(curr[i]);
			if (visited.find(copy) == visited.end()) result.push_back(copy);
		}
		return result;
	}
}
