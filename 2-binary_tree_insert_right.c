#include "binary_trees.h"

/**
* binary_tree_insert_right - inserts a node as the right-child of another node
* @parent: is a pointer to the parent node of the node to insert
* @value: is the value to put in the new node
* Return: a pointer to the new node, or NULL on failure.
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *new;

if (parent == NULL)
return (NULL);

new = malloc(sizeof(binary_tree_t));
if (new == NULL)
return (NULL);

new->parent = parent;
new->n = value;
new->right = parent->right;
new->left = NULL;
parent->right = new;
return (parent->right);
}
