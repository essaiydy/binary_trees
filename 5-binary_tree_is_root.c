#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_is_root -  function that checks if a given node is a root
 *
 * @node:  is a pointer to the node to check
 *
 * Return: 0 or 1
 */

int binary_tree_is_root(const binary_tree_t *node)
{

	if (node != NULL)
	{
		if (node->parent == NULL)
		{
			return (1);
		}
	}
	return (0);
}
