#include "trie.h"

Trie::Trie() {
	root = new TrieNode("");
	root->isEnd = false;
}

Trie::~Trie() {
	delete root;
}

void Trie::add(const string& str) {
	if (str.empty()) {
		root->isEnd = true;
		return;
	}

	int idx = 0;
	TrieNode* prev = nullptr, *curr = root;
	while (curr != nullptr && isPrefix(curr->val, str, idx)) {
		idx += curr->val.size();
		if (idx == str.size()) {
			break;
		}
		prev = curr;
		curr = curr->next[hash(str[idx])];
	}

	if (curr == nullptr) {
		string sufix = str.substr(idx, str.size() - idx);
		prev->next[hash(sufix[0])] = new TrieNode(sufix);
	} else if (idx == str.size()) {
		curr->isEnd = true;
	} else {
		int commonLen = 0;
		while (idx + commonLen < str.size() && curr->val[commonLen] == str[idx + commonLen]) {
			commonLen += 1;
		}
		curr->val = curr->val.substr(commonLen, curr->val.size() - commonLen);
		string common = str.substr(idx, commonLen);
		string suffix = str.substr(idx + commonLen, str.size() - idx - commonLen);

		TrieNode* middle = new TrieNode(common);
		middle->next[hash(curr->val[0])] = curr;
		prev->next[hash(common[0])] = middle;

		if (!suffix.empty()) {
			middle->isEnd = false;
			middle->next[hash(suffix[0])] = new TrieNode(suffix);
		}
	}
}

bool Trie::contains(const string& str) {
	if (str.empty()) {
		return root->isEnd;
	}

	int idx = 0;
	TrieNode* curr = root;
	while (curr != nullptr && isPrefix(curr->val, str, idx)) {
		idx += curr->val.size();
		if (idx < str.size()) {
			curr = curr->next[hash(str[idx])];
		}
	}

	return idx == str.size() && curr->isEnd == true;
}

pair<bool, string> Trie::shortestPrefix(const string& str) {
	if (str.empty()) {
		return { root->isEnd, str };
	}

	int idx = 0;
	TrieNode* curr = root;
	while (curr != nullptr && isPrefix(curr->val, str, idx)) {
		idx += curr->val.size();
		if (curr->isEnd) {
			return { true, str.substr(0, idx) };
		}

		if (idx < str.size()) {
			curr = curr->next[hash(str[idx])];
		}
	}

	return { false, str };
}

int Trie::hash(char c) {
	return static_cast<int>(c - 'a');
}

bool Trie::isPrefix(const string& pref, const string& str, int pos) {
	if (pref.size() > str.size() - pos) {
		return false;
	}
	return pref == str.substr(pos, pref.size());
}

