#include "binary_trees.h"

/**
 * binary_tree_inorder - traverses a binary tree using in-order traversal
 * @tree: pointer to rrot node of the tree to traverse
 * @func: pointer to function to call for each node
 *
 * Return: void.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	/* ensure tree and func are not NULL */
	if (tree == NULL || func == NULL)
		return;

	/* visit all nodes in the left subtree, outputing their values */
	binary_tree_inorder(tree->left, func);

	/* visit root node and print its value */
	func(tree->n);

	/* visit all nodes in the right subtree, outputting their values */
	binary_tree_inorder(tree->right, func);
}
