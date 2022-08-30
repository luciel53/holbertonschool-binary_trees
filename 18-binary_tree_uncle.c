#include "binary_trees.h"


/**
 * binary_tree_uncle - a function that finds the uncle of a node
 * @node: a pointer to the node to find the uncle
 * Return: a pointer to the uncle node or NULL if fails
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *root = NULL;

	if (!node)
		return (NULL);

	if (!node->parent)
		return (NULL);

	if (!node->parent->parent)
		return (NULL);

	root = node->parent->parent;

	if (root->left != NULL && root->left != node->parent)
		return (root->left);

	if (root->right != NULL && root->right != node->parent)
		return (root->right);

	return (NULL);

}
