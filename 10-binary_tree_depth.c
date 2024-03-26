#include "binary_trees.h"

/**
 * binary_tree_depth- Measures the depth of a node in a binary tree
 *
 * @tree: A pointer to the node to measure the depth of
 *
 * Return: the depth, 0 if tree is NULL
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t counter = 0;

	if (tree == NULL)
		return (0);

	while (tree->parent)
	{
		tree = tree->parent;
		counter++;
	}

	return (counter);
}
