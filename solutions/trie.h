#pragma once

#include <string>
#include <vector>

using namespace std;

class TrieNode {
public:
	string val;
	bool isEnd;
	vector<TrieNode*> next;

	TrieNode(const string& str){
		val = str;
		isEnd = true;
		next = vector<TrieNode*>(26, nullptr);
	}

	~TrieNode() {
		for (TrieNode* node : next) {
			delete node;
		}
	}
};

class Trie {
public:

	TrieNode* root;

	// Constructors
	Trie();
	// Destructors
	~Trie();

	void add(const string& str);
	bool contains(const string& str);
	pair<bool, string> shortestPrefix(const string& str);
	
	int hash(char c);
	bool isPrefix(const string& pref, const string& str, int pos);
};
