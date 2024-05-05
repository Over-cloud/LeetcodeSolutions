#include "linked_list.h"

LinkedList::LinkedList(vector<int> arr) {
	for (auto& val : arr) {
		add_back(val);
	}
}

LinkedList::~LinkedList() {
	for (auto& [_, nodePtr] : map) {
		delete(nodePtr);
	}
	map.clear();
	head = nullptr;
	tail = nullptr;
}

ListNode* LinkedList::getHead() {
	return head;
}

ListNode* LinkedList::getNode(int x) {
	if (map.find(x) != map.end()) {
		return map[x];
	}
	return nullptr;
}

void LinkedList::add_back(int x) {
	if (map.find(x) != map.end()) {
		return;
	}

	ListNode* newNode = new ListNode(x);
	map[x] = newNode;

	if (head == nullptr) {
		head = newNode;
		tail = newNode;
	} else {
		tail->next = newNode;
		tail = newNode;
	}
}

vector<int> LinkedList::as_vec() {
	vector<int> arr;
	ListNode* curr = head;
	while (curr) {
		arr.push_back(curr->val);
		curr = curr->next;
	}
	return arr;
}
