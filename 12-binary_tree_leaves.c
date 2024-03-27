#include "binary_trees.h"

/**
 * binary_tree_leaves- Counts the leaves in a binary tree
 *
 * @tree: A pointer to the root node of the tree whose leaves are to be counted
 *
 * Return: the number of leaves, 0 if tree is NULL
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t number = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		number = binary_tree_leaves(tree->left);
	if (tree->right)
		number += binary_tree_leaves(tree->right);
	if (!(tree->left) && !(tree->right))
		number++;
	return (number);
}
