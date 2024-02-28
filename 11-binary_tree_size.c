#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: tree to check
 * Return: size of tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0, rt = 0, lt = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		lt = binary_tree_size(tree->left);
		rt = binary_tree_size(tree->right);
		size = rt + lt + 1;
	}
	return (size);
}
