#pragma once

#include <string>
#include <vector>

//Description
//Given a string s, partition s such that every
//substring
//of the partition is a
//palindrome
//.Return all possible palindrome partitioning of s.

namespace PalindromePartitioning {
	using namespace std;

	vector<vector<string>> partition(string s);

	// Helpers
	bool isPalindrome(const string& s, int l, int r);
	vector<string> toPartitionString(const string& s, const vector<int>& partition);
}
