#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_leaves - function that counts the leaves in a binary tree
 *
 * @tree: is a pointer to the root node of the tree to count the n of leave
 *
 * Return: l + r
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t l, r;

	if (tree == NULL)
	{
		return (0);
	}

	l = binary_tree_leaves(tree->left);
	r = binary_tree_leaves(tree->right);

	if (tree->left == NULL)
	{
		return (1);
	}
	if (tree->right == NULL)
	{
		return (1);
	}

	return (l + r);
}
