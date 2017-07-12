#include "binary_trees.h"

/**
 * binary_tree_leaves - finds the number of leaves in a binary tree
 * @tree: pointer to root node in binary tree
 *
 * Return: number of leaves in tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->right && tree->left)
		return (binary_tree_leaves(tree->right) +
			binary_tree_leaves(tree->left));

	if (tree->right)
		return (binary_tree_leaves(tree->right));

	if (tree->left)
		return (binary_tree_leaves(tree->left));

	return (1);
}
