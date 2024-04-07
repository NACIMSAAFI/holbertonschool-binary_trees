#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full.
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: If the tree is full, 1. Otherwise, 0.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
    /* If tree is NULL, it is full (base case) */
    if (tree == NULL)
        return (1);

    /* If the node has no children, it is full */
    if (tree->left == NULL && tree->right == NULL)
        return (1);

    /* If the node has both children, check recursively for the subtrees */
    if (tree->left != NULL && tree->right != NULL)
        return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));

    /* If the node has only one child, it is not full */
    return (0);
}
