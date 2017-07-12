#include "binary_trees.h"

/**
 * binary_tree_size - finds the size of a binary tree
 * @tree: pointer to root node of tree to measure
 *
 * Return: size of tree (number of elements/nodes in tree)
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	unsigned int tsize = 1;

	if (tree->left)
		tsize += binary_tree_size(tree->left);
	if (tree->right)
		tsize += binary_tree_size(tree->right);
	return (tsize);
}
