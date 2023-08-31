#include "binary_trees.h"

/**
* binary_tree_rotate_right - performs a right-rotation on a binary tree
* @tree: is a pointer to tree.
* Return: a pointer to the new tree, or NULL on failure.
*/

binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
binary_tree_t *new = NULL, *ne;

if (tree == NULL)
return (NULL);

if (tree->left)
{
new = tree->left;
tree->left = NULL;
new->parent = NULL;
if (new->right)
{
ne = new->right;
new->right = NULL;
tree->parent = new;
new->right = tree;
ne->parent = new->right;
new->right->left = ne;
}
else
{
tree->parent = new;
new->right = tree;
}
}
return (new);
}
