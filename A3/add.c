#include <stdio.h>
#include <stdlib.h>
#include "structs.h"
#include "BST_init.h"


node *insert_node(node *root, int value)
{
    if (root == NULL)
    {
        root = new_node(value);
    }
    else if (value < root->value)
    {
        root->left_child = insert_node(root->left_child, value);
    }
    else if (value > root->value)
    {
        root->right_child = insert_node(root->right_child, value);
    }
    else
    {
        printf("Equal");
    }
    return root;
}

void add(BST *input, int value)
{
    if (input->root == NULL)
    {
        input->root = new_node(value);
        input->size += 1;
    }
    else if (value < input->root->value)
    {
        input->root->left_child = insert_node(input->root->left_child, value);
        input->size += 1;
    }
    else if (value > input->root->value)
    {
        input->root->right_child = insert_node(input->root->right_child, value);
        input->size += 1;
    }
    else
    {
        printf("Equal");
    }
}