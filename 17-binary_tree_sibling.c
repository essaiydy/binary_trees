#include "binary_trees.h"

/**
 * inary_tree_sibling - A  function that finds the sibling of a node
 * @node: A pointer to the root of the binary tree
 * Return: A pointer to the sibling node;
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
    if (!node || !node->parent)
        return (NULL);

    if (node->parent->left == node)
    {
        return (node->parent->right);
    }
    return (node->parent->left);
}
