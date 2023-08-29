#include "binary_trees.h"

/**
* binary_tree_insert_left - inserts a node as the left-child of another node
* @parent: is a pointer to the parent node of the node to create
* @value: is the value to put in the new node
* Return: a pointer to the new node, or NULL on failure.
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *new;

if (parent == NULL)
return (NULL);

new = malloc(sizeof(binary_tree_t));
if (new == NULL)
return (NULL);

new->parent = parent;
new->n = value;
new->left = parent->left;
new->right = NULL;
parent->left = new;
return (parent->left);
}
