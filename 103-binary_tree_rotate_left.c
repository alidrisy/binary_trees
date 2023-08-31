#include "binary_trees.h"

/**
* binary_tree_rotate_left - performs a left-rotation on a binary tree
* @tree: is a pointer to tree.
* Return: a pointer to the new tree, or NULL on failure.
*/

binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
binary_tree_t *new = NULL, *ne;

if (tree == NULL)
return (NULL);

if (tree->right)
{
new = tree->right;
tree->right = NULL;
new->parent = NULL;
if (new->left)
{
ne = new->left;
new->left = NULL;
tree->parent = new;
new->left = tree;
ne->parent = new->left;
new->left->right = ne;
}
else
{
tree->parent = new;
new->left = tree;
}
}
return (new);
}
