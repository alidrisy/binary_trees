#include "binary_trees.h"

/**
* binary_tree_uncle - finds the uncle of a node
* @node: is a pointer to the node
* Return: the uncle node
*/

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
binary_tree_t *new, *ne;

if (node == NULL)
return (NULL);

ne = node->parent;
new = ne->parent;
if (!new || new->left == NULL || new->right == NULL)
return (NULL);

if (new->left == ne)
return (new->right);
else
return (new->left);
}
