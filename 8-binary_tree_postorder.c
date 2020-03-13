#include "binary_trees.h"

/**
 * binary_tree_postorder - create new node
 * @tree: pointer parent
 * @func: func
 *
 * Return: pointer new node or NULL
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
if (!tree || !func)
return;
binary_tree_postorder(tree->left, func);
binary_tree_postorder(tree->right, func);
func(tree->n);
}
