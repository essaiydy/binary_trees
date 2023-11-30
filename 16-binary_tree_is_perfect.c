#include "binary_trees.h"

/**
 * binary_tree_is_perfect - A function that checkes if binary tree is full
 * @tree: A pointer to the root of the binary tree
 * Return: The balance factor of the binary tree;
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (tree->left && tree->right &&
			binary_tree_height(tree->left) == binary_tree_height(tree->right))
		return (binary_tree_is_perfect(tree->right) &&
				binary_tree_is_perfect(tree->left));
	if (!tree->left && !tree->right)
		return (1);
	return (0);
}

/**
 * binary_tree_height - A function that calculates the hieght of a binary tree
 * @tree: A pointer to the node to check
 * Return: The height of the binary tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t h1, h2;

	if (!tree || (tree && !tree->left && !tree->right))
		return (0);

	h1 = binary_tree_height(tree->left);
	h2 = binary_tree_height(tree->right);

	return (h1 > h2 ? h1 + 1 : h2 + 1);
}
