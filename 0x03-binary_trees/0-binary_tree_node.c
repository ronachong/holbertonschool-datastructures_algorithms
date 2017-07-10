#include "binary_trees.h"

/**
 * binary_tree_node - creates a new binary tree node
 * @parent: pointer to parent node for new node
 * @value: value for new node
 *
 * Return: pointer to new node, or NULL in case of malloc failure.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *child;

	child = malloc(sizeof(binary_tree_t));
	if (child == NULL)
		return (NULL);

	child->parent = parent;
	child->n = value;
	return (child);
}
