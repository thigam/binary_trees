#include "binary_trees.h"

/**
 * binary_tree_is_lead- Checks if a node is a leaf
 *
 * @node: A pointer to the node to check
 *
 * Return: 1 if node is a leaf, 0 otherwise (including if node is NULL)
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	const binary_tree_t *holder = node;

	if (node == NULL)
		return (0);

	if (holder->right != NULL || holder->left != NULL)
	{
		return (0);
	}

	return (1);
}
