#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node in a binary tree.
 * @node: A pointer to the node to find the uncle.
 *
 * Return: A pointer to the uncle node, or NULL if no uncle is found.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *grand;

	if (!node)
		return (NULL);
	grand = node->parent->parent;
	if (node->parent && grand && grand->left == node->parent)
		return (grand->right);
	else if (node->parent && grand && grand->right == node->parent)
		return (grand->left);
	return (NULL);
}
