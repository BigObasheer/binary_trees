#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts tree node left
 * @parent: pointer to parent node
 * @value: value to add to node
 * Return: pointer to new node
 **/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (!parent)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (!new)
		return (NULL);

	new->left = parent->left;

	if (parent->left)
		parent->left->parent = new;

	parent->left = new;

	return (new);
}
