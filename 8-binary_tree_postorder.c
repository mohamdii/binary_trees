#include "binary_trees.h"
/**
 * binary_tree_preorder - fucntion that printss in preorder
 * @tree: is a root pointer
 * @func: is a pointer function
*/


void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
    if (!tree || !func)
        return;
    binary_tree_postorder(tree->left, func);
    binary_tree_postorder(tree->right, func);
    func(tree->n);
}