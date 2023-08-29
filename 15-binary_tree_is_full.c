#include "binary_trees.h"

/**
* binary_tree_is_full - checks if a binary tree is full
* @tree: is a pointer to the tree
* Return: 1 or 0
*/

int binary_tree_is_full(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);

if (tree && !tree->left && !tree->right)
return (1);
if (tree->left && tree->right)
return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
else
return (0);
}
