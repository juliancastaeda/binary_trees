#include "binary_trees.h"

/**
 * binary_tree_preorder - create new node
 * @tree: pointer parent
 * @func: func
 *
 * Return: pointer new node or NULL
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
if (!tree || !func)
return;
func(tree->n);
binary_tree_preorder(tree->right, func);
binary_tree_preorder(tree->left, func);
}
