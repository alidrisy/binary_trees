#include "binary_trees.h"

/**
* check_node_parent - check if the parent less than th child node
* @tree: is a pointer to node
* Return: 1 or 0
*/

int check_node_parent(const binary_tree_t *tree)
{
const binary_tree_t *p;
const binary_tree_t *gp;

if (tree == NULL || tree->parent == NULL || tree->parent->parent == NULL)
return (1);

p = tree->parent;
gp = p->parent;

while (p && gp)
{
if (p->n < gp->n && tree->n >= gp->n)
return (0);

if (p->n > gp->n && tree->n <= gp->n)
return (0);

p = p->parent;
gp = p->parent;
}

return (1);
}

/**
* tree_is_bst - checks if a binary tree is a valid Binary Search Tree
* @tree: is a pointer to the tree.
* Return: 1 or 0
*/

int tree_is_bst(const binary_tree_t *tree)
{
if (tree == NULL)
return (1);

if (!tree->right && !tree->left)
return (1);

if (tree && tree->right && tree->left)
{
if (tree->n <= tree->left->n || tree->n >= tree->right->n)
return (0);

if (tree->left->n >= tree->right->n)
return (0);
}

if (!check_node_parent(tree->left) || !check_node_parent(tree->right))
return (0);

return (tree_is_bst(tree->left) && tree_is_bst(tree->right));
}


/**
* binary_tree_is_bst - checks if a binary tree is a valid Binary Search Tree
* @tree: is a pointer to the tree.
* Return: 1 or 0
*/

int binary_tree_is_bst(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);

return (tree_is_bst(tree));
}
