#include "binary_trees.h"

/**
 * binary_tree_preorder - pre-order traversal
 * @func: function to use
 * @tree: tree to traverse
 * Return: void
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (func == NULL || tree == NULL)
	{
		return;
	}
	else
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
