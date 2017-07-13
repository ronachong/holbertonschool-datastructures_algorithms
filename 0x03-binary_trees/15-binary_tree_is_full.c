#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if binary tree is full
 * @tree: pointer to root node in tree
 *
 * Return: 0 if tree is not full, 1 if full
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL ||
	    (tree->right && tree->left == NULL) ||
	    (tree->left && tree->right == NULL))
		return (0);

	if (tree->right == NULL && tree->left == NULL)
		return (1);

	if (binary_tree_is_full(tree->left) &&
	    binary_tree_is_full(tree->right))
		return (1);

	return (0);
}
