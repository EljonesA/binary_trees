#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: pointer to the node to find the sibling
 *
 * Return: sibling of the node, otherwise null
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	/* ensure node or the node's parent is not null */
	if (node == NULL || node->parent == NULL)
		return (NULL);

	/* if node is left child, return right child of parent */
	if (node->parent->left == node)
		return (node->parent->right);

	/* if node is right child, return left of parent */
	if (node->parent->right == node)
		return (node->parent->left);

	/* incase node is neither the left nor right child, return NULL */
	return (NULL);
}
