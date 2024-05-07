#include "pch.h"

#include "../solutions/double_a_number_represented_by_a_linked_list.cpp"
#include "../solutions/linked_list.h"

namespace {
    using namespace DoubleANumberRepresentedByALinkedList;

    TEST(DoubleANumberRepresentedByALinkedListTest, Example1) {
        vector<int> input = { 1, 8, 9 };
        LinkedList list(input);
        ListNode* head = doubleIt(list.getHead());

        vector<int> output = LinkedList::as_vec(head);
        vector<int> expected = { 3, 7, 8 };
        EXPECT_EQ(expected, output);
    }

    TEST(DoubleANumberRepresentedByALinkedListTest, Example2) {
        vector<int> input = { 9, 9, 9 };
        LinkedList list(input);
        ListNode* head = doubleIt(list.getHead());

        vector<int> output = LinkedList::as_vec(head);
        vector<int> expected = { 1, 9, 9, 8 };
        EXPECT_EQ(expected, output);

        delete(head);
        head = nullptr;
    }
}
