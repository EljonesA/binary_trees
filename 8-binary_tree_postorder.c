#include "binary_trees.h"

/**
 * binary_tree_postorder - traverses a binary tree using post-order traversal
 * @tree: pointer to rrot node of the tree to traverse
 * @func: pointer to function to call for each node
 *
 * Return: void.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	/* ensure tree and func are not NULL */
	if (tree == NULL || func == NULL)
		return;

	/* visit all nodes in the left subtree, outputing their values */
	binary_tree_postorder(tree->left, func);

	/* visit all nodes in the right subtree, outputting their values */
	binary_tree_postorder(tree->right, func);

	/* visit root node and print its value */
	func(tree->n);
}
