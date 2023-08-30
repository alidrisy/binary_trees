#include "binary_trees.h"


/**
* trees_ancestor - finds the lowest common ancestor of two nodes
* @first: is a pointer to the first node
* @second: is a pointer to the second node
* Return: a pointer to the lowest common ancestor
*/

binary_tree_t *trees_ancestor(binary_tree_t *first, binary_tree_t *second)
{
if (first == NULL || second == NULL)
return (NULL);

if (first->parent == second)
return (second);
if (second->parent == first)
return (first);
if (first->parent == second->parent)
return (second->parent);

trees_ancestor(first->parent, second);
trees_ancestor(first, second->parent);

return (NULL);
}

/**
* binary_trees_ancestor - finds the lowest common ancestor of two nodes
* @first: is a pointer to the first node
* @second: is a pointer to the second node
* Return: a pointer to the lowest common ancestor
*/

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
binary_tree_t *new;

if if (first == second)
return ((binary_tree_t*)first);

new = trees_ancestor((binary_tree_t*) first, (binary_tree_t*)second);
if (new == NULL)
new = trees_ancestor((binary_tree_t*) first->parent, (binary_tree_t*) second);
if (new == NULL)
new = trees_ancestor((binary_tree_t*) first, (binary_tree_t*) second->parent);

return (new);
}
