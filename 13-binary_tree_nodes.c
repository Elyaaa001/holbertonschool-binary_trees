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
	size_t n = 0;

	if (tree)
	{
		n = (tree->left || tree->right) ? 1 : 0;
		n = binary_tree_nodes(tree->right);
		n = binary_tree_nodes(tree->left);
		return (n);
	}
}
