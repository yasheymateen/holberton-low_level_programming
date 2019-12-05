#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts node as left child of another node
 * @parent: pointer to node to insert left child in
 * @value: value to store in new node
 * Return: pointer to new node or NULL otherwise
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (!parent)
		return (NULL);
	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);
	new->n = value;
	new->parent = parent;
	new->right = NULL;
	if (parent->left == NULL)
	{
		parent->left = new;
		new->left = NULL;
	}
	else
	{
		new->left = parent->left;
		parent->left->parent = new;
		parent->left = new;
	}
	return (new);
}
