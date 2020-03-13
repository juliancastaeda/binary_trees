#include "binary_trees.h"

/**
 * binary_tree_inorder - create new node
 * @tree: pointer parent
 * @func: func
 *
 * Return: pointer new node or NULL
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
if (!tree || !func)
return;
binary_tree_inorder(tree->left, func);
func(tree->n);
binary_tree_inorder(tree->right, func);
}
