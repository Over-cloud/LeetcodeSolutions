#include "linked_list.h"

LinkedList::LinkedList(vector<int> arr) {
	for (auto& val : arr) {
		add_back(val);
	}
}

LinkedList::~LinkedList() {
	for (auto& [_, vec] : map) {
		for (ListNode* node : vec) {
			delete node;
		}
	}
	map.clear();
	head = nullptr;
	tail = nullptr;
}

ListNode* LinkedList::getHead() const {
	return head;
}

ListNode* LinkedList::getNode(int x) const {
	auto it = map.find(x);
	return (it != map.end()) ? it->second.back() : nullptr;
}

void LinkedList::add_back(int x) {
	if (map.find(x) != map.end()) {
		return;
	}

	ListNode* newNode = new ListNode(x);
	map[x].push_back(newNode);

	if (head == nullptr) {
		head = newNode;
		tail = newNode;
	} else {
		tail->next = newNode;
		tail = newNode;
	}
}

vector<int> LinkedList::as_vec() const {
	vector<int> arr;
	ListNode* curr = head;
	while (curr) {
		arr.push_back(curr->val);
		curr = curr->next;
	}
	return arr;
}
