#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_height - Function that measures the height of a binary tree
 *
 * @tree: is a pointer to the root node of the tree to measure the height.
 *
 * Return: the hight
 */

size_t binary_tree_height(const binary_tree_t *tree)
{

	size_t higL = 0;
	size_t higR = 0;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left)
	{
		higR = binary_tree_height(tree->left) + 1;
	}
	if (tree->right)
	{
		higL = binary_tree_height(tree->right) + 1;
	}

	return ((higR > higL) ? higR : higL);

}
