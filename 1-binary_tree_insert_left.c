#include "binary_trees.h"
/**
 * binary_tree_insert_left - function that inserts to the left
 * @parent: parent node
 * @value: value to be inserted
 * Return: returns a pointer to the left node
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    binary_tree_t *new = malloc(sizeof(binary_tree_t));

    if (new == NULL)
    {
        return (NULL);
    }
    if (parent == NULL)
    {
        return (NULL);
    }
    new->parent = parent;
    new->n = value;
    new->left = parent->left;
    new->right = NULL;
    
    if (parent->left != NULL)
    {
        parent->left->parent = new;
        new->left->left = NULL;
    }
    parent->left = new;
    return (new); 
}