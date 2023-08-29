#include "binary_trees.h"

/**
* binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
* @tree: is a pointer to the tree
* Return: the number of leaves
*/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
size_t left = 0;
size_t right = 0;

if (tree == NULL)
return (0);

left = binary_tree_nodes(tree->left);
right = binary_tree_nodes(tree->right);

if (tree->left != NULL || tree->right != NULL)
return (left + 1 + right);

return (left + right);
}
