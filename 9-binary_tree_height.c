#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_height - to calculate the height of a binary tree
 * @tree: tree to calculate
 * Return: height of the binary tree or 0
 **/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l, r;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
	{
		return (0);
	}

	l = binary_tree_height(tree->left);
	r = binary_tree_height(tree->right);

	if (r < l)
	{
		return (l + 1);
	}
	else
	{
		return (r + 1);
	}
}

