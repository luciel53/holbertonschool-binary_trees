#include "binary_trees.h"

/**
 * binary_tree_leaves - a function that counts the leaves in a binary tree
 * @tree: is a pointer to the root node of the tree to count the number of
 * leaves
 * Return: the number of leaves in the tree or 0 if NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaf = 0, temp = 0;

	if (!tree)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		leaf++;

	else
	{
		temp = binary_tree_leaves(tree->left);
		return (temp + binary_tree_leaves(tree->right));
	}

	return (leaf);
}
