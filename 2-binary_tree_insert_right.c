#include "binary_trees.h"

/**
 * binary_tree_insert_right - A function that inserts a node as the right-child
 * of another node
 * @parent: the parent node
 * @value: the value of the new node
 * Return: a pointer to the new_node or NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = binary_tree_node(parent, value);

	if (parent == NULL)
		return (NULL);

	if (new_node == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
	}
	parent->right = new_node;

	return (new_node);


}
