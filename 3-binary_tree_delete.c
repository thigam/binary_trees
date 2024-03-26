#include "binary_trees.h"

/**
 * binary_tree_delete- Deletes an entire binary tree
 *
 * @tree: a pointer to the root node of the tree to delete
 *
 * Return: void
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	if (tree->right != NULL)
	{
		binary_tree_delete(tree->right);
	}
	if (tree->left != NULL)
	{
		binary_tree_delete(tree->left);
	}

	if (tree->parent == NULL)
	{
		free(tree);
		return;
	}

	if (tree->parent->left == tree)
	{
		tree->parent->left = NULL;
	}
	else if (tree->parent->right == tree)
	{
		tree->parent->right = NULL;
	}
	free(tree);
}
