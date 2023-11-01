#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is prfect
 * @tree: pointer to root node of the tree to check
 *
 * Return: 1 if perfect, otherwise 0.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_height = 0, right_height = 0;
	const binary_tree_t *left, *right;

	/* ensure tree is not null */
	if (tree == NULL)
		return (0);

	/* check if current node is leaf */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* check if current node has only one child */
	if (tree->left == NULL || tree->right == NULL)
		return (0);

	/* recursively check if both left & right subtrees are perfect */
	if (binary_tree_is_perfect(tree->left) &&
			binary_tree_is_perfect(tree->right))
	{
		left = tree->left;
		right = tree->right;

		/* calculate height of left subtree */
		while (left)
		{
			left_height++;
			left = left->left;
		}

		/* calculate height of right subtree */
		while (right)
		{
			right_height++;
			right = right->right;
		}

		/* check if heights of both subtrees are equal */
		return (left_height == right_height);
	}

	return (0);
}
