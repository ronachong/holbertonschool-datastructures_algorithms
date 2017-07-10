#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as right child of another node.
 * @parent: pointer to parent node for created node
 * @value: value to store in new node
 *
 * Return: pointer to created node, or NULL on failure.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *old_lchild;

	old_lchild = parent->right;
	parent->right = binary_tree_node(parent, value);

	if (parent->right == NULL)
		return (NULL);

	parent->right->right = old_lchild;
	if (old_lchild)
		old_lchild->parent = parent->right;

	return (parent->right);
}
