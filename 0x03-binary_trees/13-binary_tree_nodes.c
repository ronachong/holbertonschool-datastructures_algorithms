#include "binary_trees.h"

/**
 * binary_tree_nodes - finds number of nodes in binary tree with one+ children
 * @tree: pointer to root node in binary tree
 *
 * Return: number of nodes in tree with at least one child
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->right && tree->left)
		return (1 + binary_tree_nodes(tree->right) +
			binary_tree_nodes(tree->left));

	if (tree->right)
		return (1 + binary_tree_nodes(tree->right));

	if (tree->left)
		return (1 + binary_tree_nodes(tree->left));

	return (0);
}
