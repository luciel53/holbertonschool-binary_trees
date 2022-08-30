#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - function that inserts a node
 * as the left-child of another node
 * @parent: pointer to the node of left-child
 * @value: value to store in new node
 *
 * Return: pointer to create node,
 * or NULL on failure or if parent NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *x_node, *y_node, *z_node;

	if (parent == NULL)
		return (NULL);

	z_node = binary_tree_node(parent, value);
	if (z_node == NULL)
		return (NULL);
	x_node = parent;
	y_node = parent->left;
	z_node->left = y_node;
	x_node->left = z_node;
	if (y_node != NULL)
		y_node->parent = z_node;
	return (z_node);
}
