#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_is_full - function that checks if a binary tree is full
 *
 * @tree: is a pointer to the root node of the tree to check
 *
 * Return:  function that checks if a binary tree is ful
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	size_t l, r;

	if (!tree)
		return (0);
	if (tree->left && tree->right)
	{
		l = binary_tree_is_full(tree->left);
		r = binary_tree_is_full(tree->right);
		if (!r || !l)
			return (0);
		return (1);
	}
	if (!tree->left && !tree->right)
		return (1);
	return (0);
}
