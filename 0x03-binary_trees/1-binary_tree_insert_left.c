#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as left child of another node.
 * @parent: pointer to parent node for created node
 * @value: value to store in new node
 *
 * Return: pointer to created node, or NULL on failure.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *old_lchild;

	old_lchild = parent->left;
	parent->left = binary_tree_node(parent, value);

	if (parent->left == NULL)
		return (NULL);

	parent->left->left = old_lchild;
	if (old_lchild)
		old_lchild->parent = parent->left;

	return (parent->left);
}
