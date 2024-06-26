#include "binary_trees.h"

/**
 * binary_tree_nodes- Counts the nodes with at least 1 child in a binary tree
 *
 * @tree: A pointer to the root node of the tree to count the number of nodes
 *
 * Return: The number of nodes with at least one child, 0 if tree is NULL
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		nodes = binary_tree_nodes(tree->left);
	if (tree->right)
		nodes += binary_tree_nodes(tree->right);
	if (tree->left || tree->right)
		nodes++;
	return (nodes);
}
