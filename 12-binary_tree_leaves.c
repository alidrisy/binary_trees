#include "binary_trees.h"

/**
* binary_tree_leaves - counts the leaves in a binary tree
* @tree: is a pointer to the tree
* Return: the number of leaves
*/

size_t binary_tree_leaves(const binary_tree_t *tree)
{
size_t left = 0;
size_t right = 0;

if (tree == NULL)
return (0);

left = binary_tree_leaves(tree->left);
right = binary_tree_leaves(tree->right);

if (!tree->left && !tree->right)
return (left + 1 + right);

return (left + right);
}
