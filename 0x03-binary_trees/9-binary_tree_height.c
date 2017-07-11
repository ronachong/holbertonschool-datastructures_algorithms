#include "binary_trees.h"

/**
 * binary_tree_height - find the height of a binary tree
 * @tree: pointer to root node of binary tree
 *
 * Return: 0 if tree is NULL, else height of tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left)
		return (1 + binary_tree_height(tree->left));
	if (tree->right)
		return (1 + binary_tree_height(tree->right));
	if (tree->parent &&
	    tree->parent->left == tree &&
	    tree->parent->right)
		return (binary_tree_height(tree->parent->right));

	return (0); /* if no children */
}

