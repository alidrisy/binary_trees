#include "binary_trees.h"


size_t binary_tree_size(const binary_tree_t *tree);
size_t tree_height(const binary_tree_t *tree);

/**
* binary_tree_is_perfect - checks if a binary tree is perfect
* @tree: is a pointer to the tree
* Return: 1 or 0
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
int x, y, i, n;

if (tree == NULL)
return (0);

if (!tree->left || !tree->right)
return (0);

x = tree_height(tree->left);
y = tree_height(tree->right);
i = binary_tree_size(tree->left);
n = binary_tree_size(tree->right);

if ((x == y)&& (n == i))
return (1);

return (0);
}

/**
* tree_height - masure th height of tree
* @tree: is a pointer to the tree
* Return: 1 or 0
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
