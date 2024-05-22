#include "palindrome_partitioning.h"

namespace PalindromePartitioning {
	vector<vector<string>> partition(string s) {
		vector<vector<string>> result;

		int partCnt = pow(2, s.size() - 1);
		for (int i = 0; i < partCnt; i++) {
			vector<int> partition{ 0 };
			bool valid = true;
			for (int j = 1; j <= s.size(); j++) {
				if (i & (1 << (j - 1))) {
					if (isPalindrome(s, partition.back(), j - 1)) {
						partition.push_back(j);
					} else {
						valid = false;
						break;
					}
				}
			}

			valid = valid && isPalindrome(s, partition.back(), s.size() - 1);
			if (valid) {
				result.push_back(toPartitionString(s, partition));
			}
		}

		return result;
	}

	bool isPalindrome(const string& s, int l, int r) {
		while (l < r) {
			if (s[l] != s[r]) {
				return false;
			}
			l += 1;
			r -= 1;
		}
		return true;
	}

	vector<string> toPartitionString(const string& s, const vector<int>& partition) {
		vector<string> partitionString;
		for (int i = 1; i < partition.size(); i++) {
			partitionString.push_back(s.substr(partition[i - 1], partition[i] - partition[i - 1]));
		}
		partitionString.push_back(s.substr(partition.back(), s.size()));
		return partitionString;
	}
}
