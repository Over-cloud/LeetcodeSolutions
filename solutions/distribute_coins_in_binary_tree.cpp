#include "distribute_coins_in_binary_tree.h"

#include <cstdlib>

namespace DistributeCoinsInBinaryTree {
	int distributeCoins(TreeNode* root) {
		return giveOrGet(root).second;
	}

	// Returns { number of nodes: give+/get-, number of culmulative moves }
	pair<int, int> giveOrGet(TreeNode* curr) {
		if (!curr) {
			return { 0, 0 };
		}

		auto parLeft = giveOrGet(curr->left);
		auto parRight = giveOrGet(curr->right);
		int nodeCount = parLeft.first + parRight.first + curr->val - 1;
		int culMove = parLeft.second + parRight.second + abs(nodeCount);

		return { nodeCount , culMove };
	}
}
