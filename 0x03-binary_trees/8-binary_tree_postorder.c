#include "binary_trees.h"

/**
 * binary_tree_postorder - traverses a binary tree in post-order fashion
 * @tree: pointer to root node of the tree to traverse
 * @func: pointer to a function to call for each node. Value i node will be passed as parameter to function.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree->left)
		binary_tree_postorder(tree->left, func);
	if (tree->right)
		binary_tree_postorder(tree->right, func);

	(*func)(tree->n);
}
