#include "binary_trees.h"
/**
*binary_tree_is_perfect-checks if a binary tree is perfect
*@tree:pointer to the root node
*Return:1 if perfect,0 otherwise
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
size_t left_height,right_height;
size_t left_nodes,right_nodes;
size_t total_nodes,height,expected_nodes;
if(!tree)
return(0);
left_height=binary_tree_height(tree->left);
right_height=binary_tree_height(tree->right);
if(left_height!=right_height)
return(0);
left_nodes=binary_tree_size(tree->left);
right_nodes=binary_tree_size(tree->right);
total_nodes=left_nodes+right_nodes+1;
height=binary_tree_height(tree);
expected_nodes=(1<<(height+1))-1;
return(total_nodes==expected_nodes);
}
