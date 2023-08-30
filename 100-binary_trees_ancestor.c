#include "binary_trees.h"

/**
* depth - measures the depth of a binary tree
* @tree: is a pointer to the tree
* Return: the tree depth
*/

size_t depth(const binary_tree_t *tree)
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

/**
* binary_trees_ancestor - finds the lowest common ancestor of two nodes
* @first: is a pointer to the first node
* @second: is a pointer to the second node
* Return: a pointer to the lowest common ancestor
*/

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
if (first == NULL || second == NULL)
return (NULL);

if (first == second)
return ((binary_tree_t *) first);

if (depth(first) > depth(second))
{
return (binary_trees_ancestor(first->parent, second));
}
if (depth(first) < depth(second))
{
return (binary_trees_ancestor(first, second->parent));
}

return (binary_trees_ancestor(first->parent, second->parent));
}
