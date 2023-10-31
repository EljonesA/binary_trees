#include "binary_trees.h"

/**
 * binary_tree_node - creates a bo=inary tree node
 * @parent: pointer to the parent node to create
 * @value: value to put in the new node
 *
 * Return: new created node, NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	/* create tree by allocating memory for it */
	binary_tree_t *new_tree = malloc(sizeof(binary_tree_t));

	if (new_tree == NULL) /* unable to create tree for some reason */
		return (NULL);

	/* assign value */
	new_tree->n = value;

	/* assign parent node */
	new_tree->parent = parent;

	/* when created a node does not have any child */
	new_tree->left = NULL;
	new_tree->right = NULL;

	/* return the created tree */
	return (new_tree);
}
