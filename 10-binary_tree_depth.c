#include "binary_trees.h"
/**
 * binary_tree_depth - depth
 * @tree: node to check depth
 * Return: 0 if tree is null
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
    if ((tree && tree->parent) == 1)
    {
        return (1 + binary_tree_depth(tree->parent));
    }
    else
    {
        return (0);
    }
}
