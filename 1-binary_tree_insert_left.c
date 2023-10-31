#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a new node on left of parent node
 * @parent: root node to insert it's left child
 * @value: the new node's value
 *
 * Return: the newly created left node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	/* ensure parent is not NULL */
	if (parent == NULL)
		return (NULL);

	/* create left node */
	binary_tree_t *left_node = binary_tree_node(parent, value);

	if (left_node == NULL)
		return (NULL);

	/* assign it's data to value */
	left_node->n = value;

	/* assign it to the left of parent */
	if (parent->left != NULL)
	{
		/* create temp node to hold parent's left child */
		binary_tree_t *temp_node = parent->left;

		/* overwrite parent's left child with created node */
		parent->left = left_node;

		/* set parent's left child left node to the temp node */
		parent->left->left = temp_node;

		/* update parent of parent's left child to the new node */
		parent->left->left->parent = left_node;
	}
	else
		parent->left = left_node;

	/* return pointer to created node */
	return (left_node);
}
