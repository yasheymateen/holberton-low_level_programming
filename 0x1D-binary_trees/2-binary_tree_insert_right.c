#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts node as right child
 * @parent: pointer to node to insert in
 * @value: value to store
 * Return: pointer to new node otherwise NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (!parent)
		return NULL;
	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return NULL;
	new->n = value;
	new->parent = parent;
	new->left = NULL;
	if (parent->right == NULL)
	{
		parent->right = new;
		new->right = NULL;
	}
	else
	{
		new->right = parent->right;
		parent->right->parent = new;
		parent->right = new;
	}
	return (new);
}
