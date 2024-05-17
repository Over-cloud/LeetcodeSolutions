#include "evaluate_boolean_binary_tree.h"
#include <iostream>
namespace EvaluateBooleanBinaryTree {
	static constexpr int OR = 2;
	static constexpr int AND = 3;

	bool evaluateTree(const TreeNode* root) {
		if (root && root->val == OR) {
			cout << " && ";
			if (evaluateTree(root->left)) {
				return true;
			} else {
				return evaluateTree(root->right);
			}
		} else if (root && root->val == AND) {
			cout << " || ";
			if (!evaluateTree(root->left)) {
				return false;
			} else {
				return evaluateTree(root->right);
			}
		} else {
			cout << root->val;
			return root && root->val == 1;
		}
	}
}
