#include "binary_trees.h"

/**
 * binary_tree_leaves - counts leaves in a binary tree
 * @tree: pointer to root node of tree to count number of leaves
 *
 * Return: number of leaves in the tree, 0 if tree NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left_leaves, right_leaves, total_leaves;

	/* ensure tree is not null */
	if (tree == NULL)
		return (0);
	/* a leaf of a tree refers to node with no children */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* traverse through left of tree, checking if child nodes are leaf */
	left_leaves = binary_tree_leaves(tree->left);

	/* traverse through right of tree, checkin gif child nodes are leaf */
	right_leaves = binary_tree_leaves(tree->right);

	/* sum both left + right leaves */
	total_leaves = left_leaves + right_leaves;

	/* return leaves */
	return (total_leaves);
}
