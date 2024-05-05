#pragma once

#include <vector>
#include <unordered_map>

class ListNode {
public:
	int val;
	ListNode* next;
	ListNode(int x) : val(x), next(nullptr) {}
};

using namespace std;
class LinkedList {
public:
	LinkedList() {}
	LinkedList(vector<int> arr);
	~LinkedList();

	ListNode* getHead();
	ListNode* getNode(int x);
	void add_back(int x);
	vector<int> as_vec();

private:
	ListNode* head{ nullptr };
	ListNode* tail{ nullptr };
	unordered_map<int, ListNode*> map;
};

