#include "binary_trees.h"

/**
 * binary_tree_is_node - checks if a node is a root in binary tree
 * @node: pointer to node to check
 *
 * Return: 1 if node is root; 0 if otherwise or node is NULL
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent)
		return (0);

	return (1);
}
