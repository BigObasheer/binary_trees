#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: a pointer to the root node of the tree to measure the balance factor
 * Return: the balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int right = 0, left = 0;

	if (!tree)
		return (0);

	if (tree->right)
		right = binary_tree_height(tree->right) + 1;

	if (tree->left)
		left = binary_tree_height(tree->left) + 1;

	return (left - right);
}
