#include "binary_trees.h"

/**
 * binary_tree_insert_left - create new node
 * @parent: pointer parent
 * @value: value nodo
 *
 * Return: pointer new node or NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *node = NULL;

if (parent == NULL)
{
return (NULL);
}
new_node = malloc(sizeof(binary_tree_t));
if (node == NULL)
{
return (NULL);
}

node->n = value;
node->left = NULL;
node->right = NULL;

if (parent->left == NULL)
{
parent->left = node;
node->parent = parent;
}
else
{
parent->left->parent = node;
node->parent = parent;
node->left = parent->left;
parent->left = node;
}

return (node);
}
