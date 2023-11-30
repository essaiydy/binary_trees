#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
#include "9-binary_tree_height.c"

/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 *
 * @tree: is a pointer to the root node of the tree to check
 *
 * Return: number
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	ifi (!tree)
		return (0);

	if (binary_tree_height(tree->left)
			== binary_tree_height(tree->right))
		return (1);
	return (0);
}
