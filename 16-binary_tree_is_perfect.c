#include "binary_trees.h"

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
