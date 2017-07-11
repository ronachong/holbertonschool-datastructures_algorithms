#include "binary_trees.h"

/**
 * binary_tree_inorder - traverses a binary tree in order
 * @tree: pointer to root node of the tree to traverse
 * @func: pointer to a function to call for each node. Value i node will be passed as parameter to function.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree->left)
		binary_tree_inorder(tree->left, func);

	(*func)(tree->n);

	if (tree->right)
		binary_tree_inorder(tree->right, func);


}
