#include "binary_trees.h"

/**
 * tree_is_perfect - checks if a binary tree is perfect
 * @tree: tree to check
 * Return: 0 if is not a perfect or other number that is the level of height
 */

int tree_is_perfect(const binary_tree_t *tree)
{
	int lt = 0, rt = 0;

	if (tree->left && tree->right)
	{
		lt = 1 + tree_is_perfect(tree->left);
		rt = 1 + tree_is_perfect(tree->right);
		if (rt == lt && rt != 0 && lt != 0)
			return (rt);
		return (0);
	}
	else if (!tree->left && !tree->right)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/**
 * binary_tree_is_perfect - checks if tree is perfect or not
 * @tree: tree to check
 * Return: 1 is it is or 0 if not
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int result = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		result = tree_is_perfect(tree);
		if (result != 0)
		{
			return (1);
		}
		return (0);
	}
}
