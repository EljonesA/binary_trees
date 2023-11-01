#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to root node of tree to measure the height
 *
 * Return: tree height, 0 when tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	/* declare left and rght variables */
	size_t left_height = 0;
	size_t right_height = 0;

	/* ensure tree is not null */
	if (tree == NULL)
		return (0);

	/* return 0 when we reach a leaf node */
	if (tree->left == NULL && tree->right == NULL)
		return (0);

	/* traverse through left of the tree */
	if (tree->left)
		left_height = binary_tree_height(tree->left);

	/* traverse through right of the tree */
	if (tree->right)
		right_height = binary_tree_height(tree->right);

	/* compare the two and return the largest */
	if (left_height > right_height)
		return (left_height + 1);
	return (right_height + 1);
}
