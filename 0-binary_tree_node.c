#include "binary_trees.h"

/**
 * print_dlistint - print d_listint
 * @parent: pointer parent
 * @value: value nodo
 *
 * Return: ponter new nodo or NULL
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
binary_tree_t *node = malloc(sizeof(binary_tree_t));
if (node == NULL)
{
return (NULL);
}
node->n = value;
node->parent = parent;
node->left = NULL;
node->right = NULL;

if (!parent)
{
parent = node;
}

return (node);
}
  
  
  

