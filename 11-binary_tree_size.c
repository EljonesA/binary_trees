#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to root node of tree to measure it's size
 *
 * Return: size of the tree, 0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	/* size is the total number of nodes in a tree */
	size_t left_nodes, right_nodes, size;

	/* ensure tree is not null */
	if (tree == NULL)
		return (0);

	/* count left nodes */
	left_nodes = binary_tree_size(tree->left);

	/* count right nodes */
	right_nodes = binary_tree_size(tree->right);

	/* sum left + right nodes >> add 1 to the result */
	size = left_nodes + right_nodes + 1;

	/* return the size */
	return (size);
}
