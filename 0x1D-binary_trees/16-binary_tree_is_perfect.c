#include "binary_trees.h"

/**
 * _power - return num to power n
 * @base: base number
 * @exp: exponent
 *
 * Return: base to the power of exp
 */
unsigned int _power(unsigned int base, unsigned int exp)
{
	unsigned int num;

	num = 1;
	while (exp--)
		num *= base;

	return (num);
}

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: height of the binary tree, or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	if (!tree)
		return (0);
	if (tree->left)
		left_height = binary_tree_height(tree->left) + 1;
	if (tree->right)
		right_height = binary_tree_height(tree->right) + 1;
	if (left_height >= right_height)
		return (left_height);
	else
		return (right_height);
}

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

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if tree is perfect, 0 otherwise or if tree is NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t nodes, height, max_nodes, i;

	if (!tree)
		return (0);
	nodes = binary_tree_size(tree);
	height = binary_tree_height(tree);
	max_nodes = 1;
	i = 1;
	while (i <= height)
	{
		max_nodes += _power(2, i);
		i++;
	}
	if (nodes < max_nodes)
		return (0);
	return (1);
}
