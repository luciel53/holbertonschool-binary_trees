#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_height -function that measures
 * the height of a binary tree
 * @tree: pointer to the root
 * Return: height or 0 if tree NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
        int height = max_height(tree);

        if (height == -1)
                return (0);

        return (height);
}

/**
 * max_height -function that measures
 * the height of a binary tree
 * @tree: pointer to the root
 * Return: height, or-1
 */

int max_height(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
		return (-1);
	left_height = max_height(tree->left);
	right_height = max_height(tree->right);
	if (left_height > right_height)
		return (left_height + 1);
	else
		return (right_height + 1);
}
