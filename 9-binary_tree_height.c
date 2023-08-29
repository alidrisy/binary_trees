#include "binary_trees.h"

/**
* binary_tree_height - measures the height of a binary tree
*
* @tree: is a pointer to the tree
* Return: the tree hieght
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
size_t left;
size_t right;

if (tree == NULL)
return (0);

if (tree->left)
left = binary_tree_height(tree->left);
if (tree->right)
right = binary_tree_height(tree->right);

return (left > right ? left + 1 : right + 1);
}
