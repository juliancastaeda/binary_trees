#include "binary_trees.h"

/**
 * binary_tree_is_root - create new node
 * @node: pointer parent
 *
 * Return: pointer new node or NULL
 */
int binary_tree_is_root(const binary_tree_t *node)
{
if (node == NULL)
return (0);
if (node->parent == NULL)
return (1);
else
return (0);
}
