#include "binary_trees.h"

/**
 * binary_tree_delete - create new node
 * @tree: pointer parent
 *
 * Return: pointer new node or NULL
 */
void binary_tree_delete(binary_tree_t *tree)
{
if (tree)
{
binary_tree_delete(tree->right);
binary_tree_delete(tree->left);
free(tree);
}
}
