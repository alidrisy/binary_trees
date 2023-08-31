#include "binary_trees.h"

/**
* bst_insert - inserts a value in a Binary Search Tree
* @tree: is a pointer to the tree.
* @value: the value to store in the node to be inserted
* Return: a pointer to the created node, or NULL on failure
*/

bst_t *bst_insert(bst_t **tree, int value)
{
if (*tree == NULL)
{
*tree = binary_tree_node(*tree, value);
return (*tree);
}

if ((*tree)->n == value)
return (NULL);

if ((*tree)->n > value)
{
if (!(*tree)->left)
{
(*tree)->left = binary_tree_node(*tree, value);
return ((*tree)->left);
}
else
return (bst_insert(&(*tree)->left, value));
}

if ((*tree)->n < value)
{
if (!(*tree)->right)
{
(*tree)->right = binary_tree_node(*tree, value);
return ((*tree)->right);
}
else
return (bst_insert(&(*tree)->right, value));
}

return (NULL);
}
