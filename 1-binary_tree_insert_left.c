#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

 /**
  * binary_tree_insert_left - function that inserts a node as the left-child
  *
  * @parent:  is a pointer to the node to insert the left-child in
  * @value:  is the value to store in the new node
  *
  * Return: new node
  */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	if (parent == NULL)
	{
		return (NULL);
	}

	binary_tree_t *node = malloc(sizeof(binary_tree_t));

	if (node == NULL)
	{
		return (NULL);
	}

	node->parent = parent;
	node->n = value;
	node->left = NULL;
	node->right = NULL;

	if (parent->left)
	{
		node->left = parent->left;
		node->left->parent = node;
	}

	parent->left = node;

	return (node);
}
