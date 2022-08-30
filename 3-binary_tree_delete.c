#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_delete - function that deletes an entire binary tree
 * @tree: pointer to the root node of the tree to delete
 *
 * If tree is NULL, do nothing
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (root == NULL)
		return ;
	binary_tree_delete(root->left);
	binary_tree_delete(root->right);
	free(tree);
}
