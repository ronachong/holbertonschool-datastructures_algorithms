#include "binary_trees.h"

/**
 * binary_tree_uncle - finds uncle to node in binary tree
 * @node: pointer to node to find uncle of
 *
 * Return: pointer to uncle node; or NULL if no uncle exists
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
if (node == NULL ||
	    node->parent == NULL ||
	    node->parent->parent == NULL)
	return (NULL);

return (binary_tree_sibling(node->parent));
}

/**
 * binary_tree_sibling - finds sibling to node in binary tree
 * @node: pointer to node to find sibling of
 *
 * Return: pointer to sibling node; or NULL if no sibling exists
 */
	binary_tree_t *binary_tree_sibling(binary_tree_t *node)
	{
if (node == NULL || node->parent == NULL)
	return (NULL);

if (node->parent->left == node && node->parent->right)
	return (node->parent->right);

if (node->parent->right == node && node->parent->left)
	return (node->parent->left);

return (NULL);
}
