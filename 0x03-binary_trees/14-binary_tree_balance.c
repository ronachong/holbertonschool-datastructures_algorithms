#include "binary_trees.h"

/**
 * binary_tree_balance - find the difference in height between right and left
 * branches of a binary tree
 * @tree: pointer to the root node of a binary tree
 *
 * Return: difference in height between right and left branches of binary tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int hl;
	int hr;

	if (tree == NULL)
		return (0);

	hl = (tree->left) ? 1 + binary_tree_height(tree->left) : 0;
	hr = (tree->right) ? 1 + binary_tree_height(tree->right) : 0;

	return (hl - hr);
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
