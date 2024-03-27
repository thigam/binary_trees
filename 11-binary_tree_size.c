#include "binary_trees.h"

/**
 * binary_tree_size- Measures the size of a binary tree
 *
 * @tree: A pointer to the root node of the tree to meaasure the size of
 *
 * Return: the size, 0 if tree is NULL
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
	{
		size = binary_tree_size(tree->left);
	}
	if(tree->right)
	{
		size += binary_tree_size(tree->right);
	}

	return (size + 1);
}
