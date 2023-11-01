#include "binary_trees.h"

/**
 * binary_tree_depth - measures depth of a node
 * @tree: pointer to the node to measure the depth
 *
 * Return: depth of the node, 0 if tree is null.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	/* variable to store the depth */
	size_t depth = 0;

	/* ensure tree is not null */
	if (tree == NULL)
		return (0);

	/* while parent, increment depth, move to next node */
	while (tree->parent)
	{
		depth++;
		tree = tree->parent;
	}
	/* return depth */
	return (depth);
}
