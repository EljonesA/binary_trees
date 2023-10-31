#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts node as right child of parent node
 * @parent: root node to insert new child node
 * @value: value of the newly created node
 *
 * Return: the newly created right node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	/* ensure parent is not NULL */
	if (parent == NULL)
		return (NULL);

	/* create right node */
	binary_tree_t *right_node = binary_tree_node(parent, value);

	if (right_node == NULL)
		return (NULL);

	/* assign it's data to value */
	right_node->n = value;

	/* assign it to the left of parent */
	if (parent->right != NULL)
	{
		/* create temp node to hold parent's left child */
		binary_tree_t *temp_node = parent->right;

		/* overwrite parent's left child with created node */
		parent->right = right_node;

		/* set parent's left child left node to the temp node */
		parent->right->right = temp_node;

		/* update parent of parent's right child to the new node */
		parent->right->right->parent = right_node;
	}
	else
		parent->right = right_node;

	/* return pointer to created node */
	return (right_node);
}
