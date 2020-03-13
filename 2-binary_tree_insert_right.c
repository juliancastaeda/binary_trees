#include "binary_trees.h"

/**
 * binary_tree_insert_right - create new node
 * @parent: pointer parent
 * @value: value nodo
 *
 * Return: pointer new node or NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *node = NULL;

if (parent == NULL)
{
return (NULL);
}
node = malloc(sizeof(binary_tree_t));
if (node == NULL)
{
return (NULL);
}

node->n = value;
node->left = NULL;
node->right = NULL;

if (parent->left == NULL)
{
parent->right = node;
node->parent = parent;
}
else
{
parent->right->parent = new_node;
new_node->parent = parent;
new_node->right = parent->right;
parent->right = new_node;
}
return (node);
}
