#include "binary_trees.h"

/**
 * binary_tree_height - create new node
 * @tree: pointer parent
 *
 * Return: pointer new node or NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t left_count = 0, right_count = 0;

if (tree == NULL)
return (0);
if (tree->left == NULL && tree->right == NULL)
return (0);
left_count = binary_tree_height(tree->left);
right_count = binary_tree_height(tree->right);
if (left_count > right_count)
return (left_count + 1);
else
return (right_count + 1);
}
