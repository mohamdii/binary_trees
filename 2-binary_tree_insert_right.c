#include "binary_trees.h"
/**
 * binary_tree_insert_right - function that inserts to the right
 * @parent: is the paarent node
 * @value: is the value inserted
 * Return: a pointer to the newly created node
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
    binary_tree_t *new;
    new = malloc(sizeof(binary_tree_t));
    if (new == NULL)
        return (NULL);
    new->parent = parent;
    new->n = value;
    new->left = NULL;
    new->right = parent->right;
    if (parent->right)
    {
        parent->right->parent = new;
    }
    parent->right = new;
    return new;

}