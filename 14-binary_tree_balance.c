#include "binary_trees.h"

/** 
* tree_height - measures the height of a binary tree 
* 
* @tree: is a pointer to the tree 
* Return: the tree hieght 
*/

size_t tree_height(const binary_tree_t *tree)
{
size_t left;
size_t right;

if (tree == NULL)
return (0);

left = 1 + tree_height(tree->left);
right = 1 + tree_height(tree->right);

return (left > right ? left : right);
}


/**
* binary_tree_balance - measures the balance factor of a binary tree
* @tree: is a pointer to the tree
* Return: the balance value
*/

int binary_tree_balance(const binary_tree_t *tree)
{
int left = 0;
int right = 0;

if (tree->left)
left = tree_height(tree->left);
if (tree->right)
right = tree_height(tree->right);

return (left - right);
}
