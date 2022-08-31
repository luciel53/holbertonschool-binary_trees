#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_size - function that measures
 * the size of a binary tree.
 * @tree: pointer to const
 *
 * Return: If tree is NULL, the function must return 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t left = 0, right = 0;

		left = tree->left ? 1 + binary_tree_size(tree->left) : 0;
		right = tree->right ? 1 + binary_tree_size(tree->right) : 0;
		return ((left > right) ? left : right);
	}
	return (0);
}
