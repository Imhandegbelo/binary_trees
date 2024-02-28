#include "binary_trees.h"

/**
 * binary_tree_leaves - function that counts the leaves in a tree
 * @tree: tree to check
 * Return: number of leaves
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaf = 0, lt = 0, rt = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		lt = binary_tree_leaves(tree->left);
		rt = binary_tree_leaves(tree->right);
		leaf = lt + rt;
		return ((!lt && !rt) ? leaf + 1 : leaf + 0);
	}
}
