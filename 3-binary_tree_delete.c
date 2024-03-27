#include "binary_trees.h"
/**
 * void binary_tree_delete - function that delete a node
 * @tree: the tree that is intended to be removed
*/


void binary_tree_delete(binary_tree_t *tree)
{

    if (tree == NULL)
        return;
    free(tree);
}