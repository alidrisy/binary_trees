#include "binary_trees.h"

/**
* tree_size - measures the size of a binary tree
* @tree: is a pointer to the tree
* Return: the tree size
*/

size_t tree_size(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);

return (tree_size(tree->left) + 1 + tree_size(tree->right));
}

/**
* tree_is_complete - checks if a binary tree is complet
* @tree: is a pointer to the tree
* @size: the number of node
* @index: the index of th node
* Return: 1 or 0
*/

int tree_is_complete(const binary_tree_t *tree, int size, int index)
{
if (tree == NULL)
return (1);

if (index >= size)
return (0);

return (tree_is_complete(tree->left, size, 2 * index + 1) &&
		tree_is_complete(tree->right, size, 2 * index + 2));
}

/**
* binary_tree_is_complete - checks if a binary tree is complet
* @tree: is a pointer to the tree
* Return: 1 or 0
*/

int binary_tree_is_complete(const binary_tree_t *tree)
{
int x = tree_size(tree);

if (tree == NULL)
return (0);

if (tree_is_complete(tree, x, 0))
return (1);

return (0);
}
