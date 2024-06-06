#pragma once

#include <vector>

//Description
//Alice has some number of cards and she wants to rearrange the cards into groups so that each group is of size groupSize, and consists of groupSize consecutive cards.
//
//Given an integer array hand where hand[i] is the value written on the ith card and an integer groupSize, return true if she can rearrange the cards, or false otherwise.

namespace HandOfStraights {
	using namespace std;

	bool isNStraightHand(vector<int>& hand, int groupSize);

	// Helper functions
	bool isCurrNStraightHand(int curr, const vector<int>& vals, vector<int>& cnts, int groupSize);
}
