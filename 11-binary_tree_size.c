#include <stdio.h>
#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_tree_size - checks the size of a binary tree
 * @tree: pointer to the root node
 * Return: its size
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	else
		return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
	}
}
