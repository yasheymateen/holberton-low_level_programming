#include "binary_trees.h"

/**
 * binary_tree_size - measure size of binary tree recursively
 * @tree: pointer to the root node of the tree to measure the size
 * Return: size of binary tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 1;

	if (!tree)
		return (0);
	if (tree->left)
		size += binary_tree_size(tree->left);
	if (tree->right)
		size += binary_tree_size(tree->right);
	return (size);
}
