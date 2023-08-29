#include "binary_trees.h"

/**
* binary_tree_size - measures the size of a binary tree
* @tree: is a pointer to the tree
* Return: the tree size
*/

size_t binary_tree_size(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);

return (binary_tree_size(tree->left) + 1 + binary_tree_size(tree->right));
}
