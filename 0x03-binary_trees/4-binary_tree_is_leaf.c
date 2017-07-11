#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if a node is a leaf in binary tree
 * @node: pointer to node to check
 *
 * Return: 1 if node is leaf; 0 if otherwise or node is NULL
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (0);

	if (node->left == NULL && node->right == NULL)
		return (1);

	return (0);
}
