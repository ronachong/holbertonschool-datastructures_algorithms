#include "binary_trees.h"

/**
 * binary_tree_depth - finds the depth of a node in a binary tree
 * @node: pointer to node in binary tree
 *
 * Return: 0 if node is NULL, else depth of node
 */
size_t binary_tree_depth(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->parent)
		return (1 + binary_tree_depth(node->parent));

	return (0);
}

/* size_t binary_tree_depth(const binary_tree_t *node) */
/* { */
/* 	int i; */
/* 	binary_tree_t *curr; */
	
/* 	if (node == NULL) */
/* 		return (0); */

/* 	curr = node; */
/* 	for (i = 0; curr->parent; i++) */
/* 		curr = curr->parent; */

/* 	return (i); */
/* } */
