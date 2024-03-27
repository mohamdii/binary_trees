#include "binary_trees.h"
/**
 * binary_tree_is_leaf - determines if its a leaf or not
 * @node: to be determined
 * Return: int
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
    if (node == NULL)
        return (0);
    if (node->left == NULL && node->right == NULL)
    {
        return (1);
    }
    return (0);
}