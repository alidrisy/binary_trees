#include "binary_trees.h"


size_t binary_tree_size(const binary_tree_t *tree);
int binary_tree_is_full(const binary_tree_t *tree);

/**
* binary_tree_is_perfect - checks if a binary tree is perfect
* @tree: is a pointer to the tree
* Return: 1 or 0
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
int x, i, n;
if (tree == NULL)
return (0);

if (tree && !tree->left && !tree->right)
return (0);

x = binary_tree_is_full(tree);
i = binary_tree_size(tree->left);
n = binary_tree_size(tree->right);

if (x && (n == i))
return (1);

return (0);
}

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
