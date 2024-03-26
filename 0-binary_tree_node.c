#include "binary_trees.h"
/**
 * binary_tree_node - function that creates the first node
 * @parent: the parent node to be created
 * @value: the assigned value in the node
 * Return: a pointer to the parent node
*/



binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new = malloc(sizeof(binary_tree_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->parent = parent;
	new->n = value;
	new->right = NULL;
	new->left = NULL;
	return (new);
}
