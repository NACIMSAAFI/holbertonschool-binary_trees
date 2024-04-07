#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node in a binary tree.
 * @node: A pointer to the node to find the sibling.
 *
 * Return: A pointer to the sibling node, or NULL if no sibling is found.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent;


	if (!node || !node->parent)
		return (NULL);
	parent = node->parent;
	if (parent->left == node && parent->right)
		return (parent->right);
	else if (parent->right == node && parent->left)
		return (parent->left);
	return (NULL);
}
