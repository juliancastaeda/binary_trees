#include "binary_trees.h"

/**
 * binary_tree_is_leaf - create new node
 * @node: pointer parent
 *
 * Return: pointer new node or NULL
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
if (node == NULL)
return (0);
if (node->left || node->right)
return (0);
else
return (1);
}
