#include "binary_trees.h"

/**
 * binary_tree_height_b - height
 * @tree: tree
 * Return: height
 */
size_t binary_tree_height_b(const binary_tree_t *tree)
{
	size_t i = 0;
	size_t r = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree)
		{
            i = tree->left ? 1 + binary_tree_height_b(tree->left) : 1;
			r = tree->right ? 1 + binary_tree_height_b(tree->right) : 1;
		}
		return ((i > r) ? i : r);
	}
}

/**
 * binary_tree_balance - Measures balance of binary tree
 * @tree: tree
 * Return: 0 if tree is null
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int j = 0, i = 0;
    int cnt = 0;

	if (tree)
	{
        j = ((int)binary_tree_height_b(tree->right));
		i = ((int)binary_tree_height_b(tree->left));
		cnt = i - j;
	}
	return (cnt);
}
