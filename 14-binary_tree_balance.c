#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
#include "9-binary_tree_height.c"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 *
 * @tree: pointer to the root node of tree measure the balance factor
 *
 * Return: measures the balance factor of a binary tree
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (tree && !tree->left && !tree->right)
		return (0);
	return ((int)(binary_tree_height(tree->left)
			- binary_tree_height(tree->right)));
}
