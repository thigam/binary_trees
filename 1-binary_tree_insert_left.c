#include "binary_trees.h"

/**
 * binary_tree_insert_left- Inserts a node as the left-child of another node
 *
 * @parent: A pointer to the node to insert the left child in
 * @value: The value to store in the new node
 *
 * Return: A pointer to the created node, or NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));

	if (new == NULL)
		return NULL;

	new->parent = parent;
	new->n = value;

	if (parent->left != NULL)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}

	parent->left = new;

	return (new);
}
