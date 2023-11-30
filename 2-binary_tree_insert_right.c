#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right -  function that inserts a node as the right-child
 *
 * @parent: is a pointer to the node to insert the right-child in
 * @value: is the value to store in the new node
 *
 * Return: a node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node = malloc(sizeof(binary_tree_t));

		if (node == NULL)
		{
			return (NULL);
		}

	node->parent = parent;
	node->right = NULL;
	node->left = NULL;
	node->n = value;

	if (parent->right)
	{
		node->right = parent->right;
		node->right->parent = node;

	}

	parent->right = node;

	return (node);

}
