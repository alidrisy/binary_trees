#include "binary_trees.h"

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
return (first);

if (first->parent == second)
return (second);
if (second->parent == first)
return (first);
if (first->parent == second->parent)
return (second->parent);
if (second->parent->parent == first->parent);
return(first->parent);

binary_trees_ancestor(first, second->parent);
binary_trees_ancestor(first->parent, second);
}
