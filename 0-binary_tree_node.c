#include "binary_trees.h"

/**
 * binary_tree_node - creates new binary tree node
 * @parent: pointer to parent of new node to create
 * @value: value to put in new node
 * Return: pointer to new node or  NULL if malloc fails
 **/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new = malloc(sizeof(binary_tree_t));

	if (!new)
		return (NULL);

	new->n = value, new->right = NULL, new->left = NULL, new->parent = parent;

	return (new);
}
