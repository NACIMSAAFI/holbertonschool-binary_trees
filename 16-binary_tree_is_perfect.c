#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: If the tree is perfect, 1. Otherwise, 0.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_height, right_height;

	/* If tree is NULL, it is not perfect (base case) */
	if (tree == NULL)
		return (0);

	/* Get the height of the left and right subtrees */
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	/* If the tree is full and left and right subtrees have same height */
	if (binary_tree_is_full(tree) && left_height == right_height)
		return (1);

	return (0);
}
