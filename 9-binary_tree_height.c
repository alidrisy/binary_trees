#include "binary_trees.h"

/**
* binary_tree_height - measures the height of a binary tree
* @tree: is a pointer to the tree
* Return: the tree hieght
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
size_t lheight;
size_t rheight;

lheight = tree->left ? 1 + binary_tree_height(tree->left) : 0;
rheight= tree->right ? 1 + binary_tree_height(tree->right) : 0;

return (lheight > rheight ? lheight : rheight);
}
