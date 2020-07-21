#include "binary_trees.h"

/**
 * binary_tree_height - Function that goes through
 * a binary tree using post-order traversal
 * @tree: is a pointer to the root node of the tree
 *
 * Return: height o the tree
 */


size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t cont = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree->left)
		{
			cont++;
		}

		if (tree->right)
		{
			cont++;
		}
	}

	return (cont);
}
