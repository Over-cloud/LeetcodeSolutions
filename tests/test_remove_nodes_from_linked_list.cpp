#include "pch.h"

#include "../solutions/remove_nodes_from_linked_list.cpp"
#include "../solutions/linked_list.h"

namespace {
    using namespace RemoveNodesFromLinkedList;

    TEST(RemoveNodesFromLinkedListTest, Example1) {
        vector<int> input = { 5, 2, 13, 3, 8 };
        LinkedList list(input);
        ListNode* head = removeNodes(list.getHead());

        vector<int> output = LinkedList::as_vec(head);
        vector<int> expected = { 13, 8 };
        EXPECT_EQ(expected, output);
    }

    TEST(RemoveNodesFromLinkedListTest, Example2) {
        vector<int> input = { 1, 1, 1, 1 };
        LinkedList list(input);
        ListNode* head = removeNodes(list.getHead());

        vector<int> output = LinkedList::as_vec(head);
        vector<int> expected = { 1, 1, 1, 1 };
        EXPECT_EQ(expected, output);
    }

    TEST(RemoveNodesFromLinkedListTest, Public1) {
        vector<int> input = { 1, 2, 3, 4 };
        LinkedList list(input);
        ListNode* head = removeNodes(list.getHead());

        vector<int> output = LinkedList::as_vec(head);
        vector<int> expected = { 4 };
        EXPECT_EQ(expected, output);
    }
}