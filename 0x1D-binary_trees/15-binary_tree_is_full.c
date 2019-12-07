#include "binary_trees.h"

/**
 * binary_tree_helper - helper function for binary_tree_is_full
 * @tree: pointer to the root node of the tree to check
 * Return: Number of nodes that are not full
 */
int binary_tree_helper(const binary_tree_t *tree)
{
	int fullness = 0;

	if (!tree)
		return (0);
	if (tree->left && tree->right)
	{
		fullness += binary_tree_helper(tree->left);
		fullness += binary_tree_helper(tree->right);
	}
	else if (!tree->left && !tree->right)
	{
		fullness += 0;
	}
	else
	{
		fullness += 1;
	}
	return (fullness);
}


/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if binary tree is full, 0 if not or if tree is NULL
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int outliers = binary_tree_helper(tree);

	if (!tree)
		return (0);
	if (outliers)
		return (0);
	return (1);
}
