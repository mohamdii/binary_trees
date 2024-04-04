#include "binary_trees.h"
/**
 * binary_tree_preorder - fucntion that printss in preorder
 * @tree: is a root pointer
 * @func: is a pointer function
*/


void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
    if (!tree || !func)
        return;
    func(tree->n);

    binary_tree_inorder(tree->right, func);
    binary_tree_inorder(tree->left, func);

}