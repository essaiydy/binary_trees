#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_size - function that measures the size of a binary tree
 *
 * @tree: is a pointer to the root node of the tree to measure the size
 *
 * Return: l + b + 1
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t l, b;

	if (tree == NULL)
	{
		return (0);
	}

	l = binary_tree_size(tree->left);
	b = binary_tree_size(tree->right);
	return (l + b + 1);
}
