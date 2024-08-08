#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_nodes - returns nodes in a tree w children
 * @tree: num of nodes to check
 * Return: num of nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t l, r;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	l = binary_tree_nodes(tree->left);
	r = binary_tree_nodes(tree->right);

	return (l + r + 1);
}
