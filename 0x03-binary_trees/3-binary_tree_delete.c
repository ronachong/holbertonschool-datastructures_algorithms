#include "binary_trees.h"

/**
 * binary_tree_delete - removes entire binary tree from memory
 * @tree: pointer to root tree of tree
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree->left)
	{
		binary_tree_delete(tree->left);
		return;
	}

	if (tree->right)
	{
		binary_tree_delete(tree->right);
		return;
	}

	if (tree->parent)
	{
		if (tree->parent->left == tree)
			tree->parent->left = NULL;
		else if (tree->parent->right == tree)
			tree->parent->right = NULL;
		binary_tree_delete(tree->parent);
	}

	free(tree);
	return;

}
