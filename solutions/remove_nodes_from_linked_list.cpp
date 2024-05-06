#include "remove_nodes_from_linked_list.h"
#include <iostream>
namespace RemoveNodesFromLinkedList {
	ListNode* removeNodes(ListNode* head) {
		if (!head) return head;

		vector<ListNode*> stack;
		ListNode* curr = head;
		while (curr != nullptr) {
			while (!stack.empty() && curr->val > stack.back()->val) {
				stack.pop_back();
			}
			stack.push_back(curr);
			curr = curr->next;
		}

		while (head != stack[0]) {
			head = head->next;
		}
		
		ListNode* prev = head;
		curr = head->next;
		for (int i = 1; i < stack.size(); i++) {
			while (curr != stack[i]) {
				prev->next = curr->next;
				curr->next = nullptr;
				curr = prev->next;
			}
			prev = curr;
			curr = curr->next;
		}

		return head;
	}
}