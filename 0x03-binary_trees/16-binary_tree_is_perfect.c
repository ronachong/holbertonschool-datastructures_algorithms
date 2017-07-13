#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if binary tree is perfect
 * @tree: pointer to root node in binary tree
 *
 * Return: 1 if tree is perfect, else 0 if not perfect or NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	unsigned int i = binary_tree_height(tree);
	unsigned int n_lvs = binary_tree_leaves(tree);

	while (i > 0)
	{
		n_lvs /= 2;
		i--;
	}

	if (n_lvs != 1)
		return (0);

	return (1);
}

/**
 * binary_tree_height - find the height of a binary tree
 * @tree: pointer to root node of binary tree
 *
 * Return: 0 if tree is NULL, else height of tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int hl = 0;
	int hr = 0;

	if (tree == NULL)
		return (0);

	if (tree->left && tree->right)
	{
		hl = binary_tree_height(tree->left);
		hr = binary_tree_height(tree->right);
		if (hl >= hr)
			return (1 + hl);
		else
			return (1 + hr);
	}
	if (tree->left) /* tree has one child: left child */
	{
		return (1 + binary_tree_height(tree->left));
	}
	if (tree->right) /* tree has one child: right child */
	{
		return (1 + binary_tree_height(tree->right));
	}
	return (0); /* tree has no children */
}

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
