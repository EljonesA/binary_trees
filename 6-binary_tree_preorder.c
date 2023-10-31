#include "binary_trees.h"

/**
 * binary_tree_preorder - traverses a tree using pre-order traversal
 * @tree: pointer to root node of tree to traverse
 * @func: pointer to a function call for each node
 *
 * Return: void.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	/* ensure tree and func are not NULL */
	if (tree == NULL || func == NULL)
		return;

	/* visit root node and print its value */
	func(tree->n);

	/* visit all nodes in the left subtree, outputing their values */
	binary_tree_preorder(tree->left, func);

	/* visit all nodes in the right subtree, outputting their values */
	binary_tree_preorder(tree->right, func);
}
