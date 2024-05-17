#include "delete_leaves_with_a_given_value.h"

namespace DeleteLeavesWithGivenValue {
	TreeNode* removeLeafNodes(TreeNode* root, int target) {
		if (root == nullptr) {
			return root;
		}

		root->left = removeLeafNodes(root->left, target);
		root->right = removeLeafNodes(root->right, target);
		if (root->val == target && !root->left && !root->right) {
			return nullptr;
		} else {
			return root;
		}
	}
}