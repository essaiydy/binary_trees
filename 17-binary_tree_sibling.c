#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_sibling - function that finds the sibling of a node
 *
 * @node: is a pointer to the node to find the sibling
 *
 * Return: 0 or 1
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{

	binary_tree_t *parent = node->parent;

	if (!node || !node->parent)
		return (NULL);

	if (parent->left || parent->right)
	{
		if (parent->left == node)
		{
			return (parent->right);
		}
		return (parent->left);
	}

	return (NULL);
}
