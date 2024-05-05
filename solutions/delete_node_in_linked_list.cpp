#include "delete_node_in_linked_list.h"

namespace DeleteNodeInLinkedList {
	void deleteNode(ListNode* node) {
		if (!node) return;

		ListNode* prev = nullptr;
		while (node->next) {
			node->val = node->next->val;
			prev = node;
			node = node->next;
		}

		if (prev) {
			prev->next = nullptr;
		}
	}
}