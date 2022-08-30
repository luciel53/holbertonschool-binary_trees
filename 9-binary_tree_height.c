#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_height -function that measures
 * the height of a binary tree
 * @tree: pointer to the root
 * Return: If tree is NULL, your function must return 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	int max;

	if (tree == NULL)
		return (0);
	else
	{
		int left_height = binary_tree_height(tree->left);
		int right_height = binary_tree_height(tree->right);

		if (left_height >= right_height) {
			return (max = left_height + 1);
		}
		else {
			return (max = right_height + 1);
		}
	return(max);
	}
}
