#include "binary_trees.h"


size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	for (depth = 0 ; tree->parent != NULL ; depth++)
		tree = tree->parent;

	return (depth);
}
