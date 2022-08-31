#include "binary_trees.h"

/**
 * binary_tree_is_perfect - a function that checks if a binary tree is perfect
 * @tree: a pointer to the root node of the tree to check
 * Return: 1 if it s a perfect tree, 0 otherwise
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{

	if (!tree)
		return (0);

	if (binary_tree_size(tree->left) == binary_tree_size(tree->right))
		return (1);

	return (0);

}


/**
 * binary_tree_size - function that measures
 * the size of a binary tree.
 * @tree: pointer to const
 *
 * Return: If tree is NULL, the function must return 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree)
	{
		size += 1;

		size += binary_tree_size(tree->left);
		size += binary_tree_size(tree->right);
	}
	return (size);
}
