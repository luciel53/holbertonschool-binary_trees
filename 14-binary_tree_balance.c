#include "binary_trees.h"

/**
 * binary_tree_balance -  a function that measures the balance factor of a
 * binary tree
 * @tree: a pointer to the root node of the tree to measure the balance factor
 * Return: the balance factor or 0
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int r;

	if (!tree)
		return (0);

	if (tree != NULL)
		r = binary_tree_height(tree->left) - binary_tree_height(tree->right);

	return (r);

}

/**
 * binary_tree_height -function that measures
 * the height of a binary tree
 * @tree: pointer to the root
 * Return: height or 0 if tree NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t left = 0, right = 0;

		left = tree->left ? 1 + binary_tree_height(tree->left) : 1;
		right = tree->right ? 1 + binary_tree_height(tree->right) : 1;
		return ((left > right) ? left : right);
	}
	return (0);
}
