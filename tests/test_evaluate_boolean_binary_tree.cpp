#include "pch.h"

#include "../solutions/evaluate_boolean_binary_tree.cpp"

namespace {
    using namespace EvaluateBooleanBinaryTree;

    TEST(EvaluateBooleanBinaryTreeTest, Example1) {
        TreeNode* root = new TreeNode(2);
        root->left = new TreeNode(1);
        root->right = new TreeNode(3);
        root->right->left = new TreeNode(0);
        root->right->right = new TreeNode(1);
        // (TRUE || (FALSE && TRUE))
        EXPECT_TRUE(evaluateTree(root));
    }
}
