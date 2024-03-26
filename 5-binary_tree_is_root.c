#include "binary_trees.h"

/**
 * binary_tree_is_root- Checks if a given node is root
 *
 * @node: a pointer to the node to check
 *
 * Return: 1 if node is a root, 0 otherwise (including if node is NULL
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	const binary_tree_t *holder = node;

	if (node == NULL)
		return (0);

	if (holder->parent != NULL)
		return (0);

	return (1);
}
