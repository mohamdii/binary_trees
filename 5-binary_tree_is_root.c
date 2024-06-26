#include "binary_trees.h"
/**
 * binary_tree_is_root - function that checks whether its a root or no
 * @node: node to check
 * Return: int
*/

int binary_tree_is_root(const binary_tree_t *node)
{
    if (node == NULL)
        return (0);
    if (node->left && node->right)
        return (1);
    return (0);
}