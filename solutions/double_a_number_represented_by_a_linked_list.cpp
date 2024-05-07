#include "double_a_number_represented_by_a_linked_list.h"

#include <deque>

namespace DoubleANumberRepresentedByALinkedList {
	ListNode* doubleIt(ListNode* head) {
		deque<ListNode*> dq;

		ListNode* curr = head;
		while (curr) {
			int carry = curr->val / 5;
			for (auto it = dq.rbegin(); carry > 0 && it != dq.rend(); it++) {
				carry = ((*it)->val + 1) / 10;
				(*it)->val = ((*it)->val + 1) % 10;
			}

			if (carry > 0) {
				head = new ListNode(1, head);
				dq.push_front(head);
			}

			curr->val = (curr->val * 2) % 10;
			dq.push_back(curr);

			curr = curr->next;
		}

		return head;
	}
}
