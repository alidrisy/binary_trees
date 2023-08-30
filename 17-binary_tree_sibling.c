#include "binary_trees.h"

/**
* binary_tree_sibling - finds the sibling of a node
* @node: is a pointer to the node
* Return: the sibling node
*/

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
binary_tree_t *new;

if (node == NULL)
return (NULL);

new = node->parent;
if (new == NULL)
return (NULL);

if (new->left == node)
return (new->right);
else
return (new->left);
}
