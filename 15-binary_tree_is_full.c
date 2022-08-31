#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
#include <stdbool.h>

/**
 * binary_tree_is_full-function that checks
 * if a binary tree is full
 * @tree: pointer to the root.
 *
 * Return: If tree is NULL, your function must return 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree)
	{
		if (tree->left == NULL && tree->right == NULL)
			return (true);
		if ((tree->left) && (tree->right))
			return (binary_tree_is_full(tree->left) &&
					binary_tree_is_full(tree->right));
		return (false);
	}
	return (0);
}
