#include "binary_trees.h"

/**
* tree_height - measures the height of a binary tree
*
* @tree: is a pointer to the tree
* Return: the tree hieght
*/

size_t tree_height(const binary_tree_t *tree)
{
size_t left = 0;
size_t right = 0;

if (tree == NULL)
return (0);

left = 1 + tree_height(tree->left);
right = 1 + tree_height(tree->right);

return (left > right ? left : right);
}

/**
* tree_levelorder - goes through a binary tree using pre-order traversal
* @tree: is a pointer to the tree
* @func: is a pointer to a function to call for each node.
* @level: the hight of the node
*/

void tree_levelorder(const binary_tree_t *tree, void (*func)(int), int level)
{
if (tree == NULL)
return;

if (level == 0)
func(tree->n);
else
{
tree_levelorder(tree->left, func, level - 1);
tree_levelorder(tree->right, func, level - 1);
}
}


/**
* binary_tree_levelorder - goes through a binary tree using levelorder
* @tree: is a pointer to the tree
* @func: is a pointer to a function to call for each node.
*/

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
int height, i;

if (tree == NULL || func == NULL)
return;

height = tree_height(tree);
for (i = 0; i < height; i++)
tree_levelorder(tree, func, i);
}
