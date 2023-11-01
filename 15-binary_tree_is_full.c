#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if binary tree is full
 * @tree: pointer to root node of tree to check
 *
 * Return: 1 if full, otherwise 0.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	/* ensure tree is not null */
	if (tree == NULL)
		return (0);

	/* check if node is leaf */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* check if node has both left and right childs -> if so, */
	/* recursively check it's left and right nodes */
	if (tree->left && tree->right)
	{
		return (binary_tree_is_full(tree->left) &&
				binary_tree_is_full(tree->right));
	}

	return (0);
}
