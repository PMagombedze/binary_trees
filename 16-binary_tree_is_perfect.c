#include "binary_trees.h"

/**
 * tree_is_perfect - function
 * @tree: tree
 * Return: if null return 0
 */
int tree_is_perfect(const binary_tree_t *tree)
{
	int i = 0, j = 0;
    int s = 1;

	if (tree->left && tree->right)
	{
		i = 1 + tree_is_perfect(tree->left);
		j = 1 + tree_is_perfect(tree->right);
		if (j == i && j != 0 && i != 0)
			return (j);
		return (0);
	}
	else if (!tree->left && !tree->right)
	{
		return (s);
	}
	else
	{
		return (0);
	}
}
/**
 * binary_tree_is_perfect - perfect or not
 * @tree: tree
 * Return: 1 if true, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int cnt;
    int s = 1;
    cnt = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		cnt = tree_is_perfect(tree);
		if (cnt != 0)
		{
			return (s);
		}
		return (0);
	}
}
