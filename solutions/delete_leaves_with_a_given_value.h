#pragma once

#include "binary_tree.h"

//Description
//Given a binary tree root and an integer target, delete all the leaf nodes with value target.
//
//Note that once you delete a leaf node with value target, if its parent node becomes a leaf node and has the value target, it should also be deleted(you need to continue doing that until you cannot).

namespace DeleteLeavesWithGivenValue {
	using namespace std;

	TreeNode* removeLeafNodes(TreeNode* root, int target);
}


