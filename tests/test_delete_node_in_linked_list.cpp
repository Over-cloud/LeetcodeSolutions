#include "pch.h"

#include "../solutions/delete_node_in_linked_list.cpp"
#include "../solutions/linked_list.cpp"

namespace {
    using namespace DeleteNodeInLinkedList;

    TEST(DeleteNodeInLinkedListTest, Example1) {
        vector<int> input = { 4, 5, 1, 9 };
        LinkedList list(input);
        deleteNode(list.getNode(5));

        vector<int> output = list.as_vec();
        vector<int> expected = { 4, 1, 9 };
        EXPECT_EQ(expected, output);
    }

    TEST(DeleteNodeInLinkedListTest, Example2) {
        vector<int> input = { 4, 5, 1, 9 };
        LinkedList list(input);
        deleteNode(list.getNode(1));

        vector<int> output = list.as_vec();
        vector<int> expected = { 4, 5, 9 };
        EXPECT_EQ(expected, output);
    }
}