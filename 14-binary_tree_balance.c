#include "binary_trees.h"

/**
 * binary_tree_balance - measures balance factor of a binary tree
 * @tree: pointer to root node of tree to measure
 *
 * Return: the balnce factor, 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left_height, right_height, balance_factor;

	/* ensure tree is not null */
	if (tree == NULL)
		return (0);

	/* traverse through left of the tree */
	left_height = binary_tree_balance(tree->left);

	/* traverse through right of the tree */
	right_height = binary_tree_balance(tree->right);

	/* get the heights */
	if (tree->left)
		left_height++;
	if (tree->right)
		right_height++;

	/* subtract the two heights to get balance factor */
	balance_factor = left_height - right_height;

	return (balance_factor);
}
