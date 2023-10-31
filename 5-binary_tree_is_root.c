#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if a given node is a root
 * @node: pointer to the node to check
 *
 * Return: 1 if node is root, otherwise 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	/* ensure node is not null */
	if (node == NULL)
		return (0);

	/* check the node's parent. If NULL, it's root. */
	if (node->parent == NULL)
		return (1);
	else
		return (0);
}
