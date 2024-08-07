#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - this func inserts a node as left child of another node
 * @parent: pointer to the node
 * @value: value to be stored in new_node
 * Return: pointer to the new node or NULL
 **/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *nn;

	if (parent == NULL)
		return (NULL);
	nn = malloc(sizeof(binary_tree_t));
	if (nn == NULL)
		return (NULL);
	if (parent->left == NULL)
		nn->left = NULL;
	else
	{
		nn->left = (*parent).left;
		parent->left->parent = nn;
	}
	nn->n = value;
	nn->right = NULL;
	nn->parent = parent;

	parent->left = nn;

	return (nn);
}
