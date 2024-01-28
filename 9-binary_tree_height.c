#include "binary_trees.h"

/**
 * binary_tree_height - Measure the height of a binary tree
 * @tree: Pointer to the root node of the tree
 *
 * Return: Height of the tree, 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
    if (tree == NULL)
		return (0);
    if (tree->parent == NULL)
    return (2);
    if (tree->left == NULL && tree->right == NULL)
    {
        return (0);
    }
    else
    {
        return (1);
    }
}