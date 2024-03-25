#include "binary_trees.h"

/**
 * binary_tree_node- Creates a binary tree node
 *
 * @parent: The parent node to point to
 * @value: The value to be held in the new node
 *
 * Return: A pointer to the new node, NULL in the case of failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	
	if (new == NULL)
		return NULL;

	new->n = value;
	new->parent= parent;

	return (new);
}
