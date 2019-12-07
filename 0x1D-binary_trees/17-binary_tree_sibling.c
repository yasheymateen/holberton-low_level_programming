#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: a pointer to the node to find the sibling
 * Return: a pointer to the sibling node.
 * If node is NULL or the parent is NULL, return NULL.
 * If node has no sibling, return NULL.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	int n;

	if (!node || !node->parent)
		return (NULL);
	n = node->n;
	node = node->parent;
	if (!node->left || !node->right)
		return (NULL);
	if (node->left->n == n)
		return (node->right);
	else if (node->right->n == n)
		return (node->left);
	else
		return (NULL);
}
