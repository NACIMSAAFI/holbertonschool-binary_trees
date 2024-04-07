#include "binary_trees.h"
/**
 * binary_tree_height - Calculates the height of a binary tree.
 * @tree: Pointer to the root node of the tree.
 * Return: Height of the binary tree, or 0 if the tree is NULL.
 **/
size_t binary_tree_height(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	if (tree->right == NULL && tree->left == NULL)
		return (0);

	if (left_height >= right_height)
		return (left_height + 1);
	else
		return (right_height + 1);
}
/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * @tree: Pointer to the root node of the tree.
 * Return: 1 if the tree is perfect, 0 otherwise.
 **/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_level, right_level;

	if (tree == NULL)
		return (0);

	if ((tree->left == NULL && tree->right == NULL))
		return (1);
	if ((tree->left && !tree->right) || (!tree->left && tree->right))
		return (0);

	left_level = binary_tree_height(tree->left);
	right_level = binary_tree_height(tree->right);

	if (binary_tree_is_perfect(tree->left) &&
		binary_tree_is_perfect(tree->right) && (left_level == right_level))
	{
		return (1);
	}

	return (0);
}