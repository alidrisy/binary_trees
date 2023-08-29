#include "binary_trees.h"

/**
* binary_tree_depth - measures the depth of a binary tree
* @tree: is a pointer to the tree
* Return: the tree depth
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
int x = 0;

if (tree == NULL)
return (0);

while (tree->parent)
{
tree = tree->parent;
x++;
}
return (x);
}
