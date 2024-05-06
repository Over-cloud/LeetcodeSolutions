#pragma once

#include "linked_list.h"

//Description:
//You are given the head of a linked list.
//
//Remove every node which has a node with a greater value anywhere to the right side of it.
//
//Return the head of the modified linked list.

namespace RemoveNodesFromLinkedList {
	using namespace std;

	ListNode* removeNodes(ListNode* head);
}