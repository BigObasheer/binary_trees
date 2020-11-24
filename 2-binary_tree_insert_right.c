#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts tree node to the right
 * @parent: pointer to parent node
 * @value: value to add inside node
 * Return: pointer to new node
 **/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (!parent)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (!new)
		return (NULL);

	new->right = parent->right;

	if (parent->right)
		parent->right->parent = new;

	parent->right = new;

	return (new);
}
