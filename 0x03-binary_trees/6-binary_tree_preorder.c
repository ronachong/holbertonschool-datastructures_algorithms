#include "binary_trees.h"

/**
 * binary_tree_preorder - traverses a binary tree in pre-order fashion
 * @tree: pointer to root node of the tree to traverse
 * @func: pointer to a function to call for each node. Value i node will be passed as parameter to function.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	(*func)(tree->n);
	if (tree->left)
		binary_tree_preorder(tree->left, func);
	if (tree->right)
		binary_tree_preorder(tree->right, func);
}
