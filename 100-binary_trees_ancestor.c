#include "binary_trees.h"

/**
* binary_trees_ancestor - finds the lowest common ancestor of two nodes
* @first: is a pointer to the first node
* @second: is a pointer to the second node
* Return: a pointer to the lowest common ancestor
*/

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
binary_tree_t *fir, *sec;

if (first == NULL || second == NULL)
return (NULL);

fir = (binary_tree_t*) first;
sec = (binary_tree_t*) second;

if (first == second)
return (fir);

if (first->parent == second)
return (sec);
if (second->parent == first)
return (fir);
if (first->parent == second->parent)
return (sec->parent);
if (second->parent->parent == first->parent)
return(fir->parent);

binary_trees_ancestor(first, second->parent);
binary_trees_ancestor(first->parent, second);
return (NULL);
}
