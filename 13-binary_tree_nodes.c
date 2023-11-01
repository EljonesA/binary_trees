#include "binary_trees.h"

/**
 * binary_tree_nodes - counts nodes with atleast 1 child in a tree
 * @tree: pointer to root node of tree to count number of nodes
 *
 * Return: number of nodes, 0 if tree is null
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	/* ensure tree is not null */
	if (tree == NULL)
		return (0);

	/* traverse all nodes with child nodes counting them > return total */
	if (tree->left != NULL || tree->right != NULL)
		return (1 + binary_tree_nodes(tree->left) +
				binary_tree_nodes(tree->right));
	else /* node has no child > return 0 */
		return (0);
}
