#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if a given node is a root
 * @node: node to check
 * Return: 0 if is not root else 1 if root
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node->parent != NULL || node == NULL)
		return (0);
	return (1);
}
