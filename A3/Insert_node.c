#include <stdio.h>
#include <stdlib.h>
#include "Structs.h"
#include "new_node.h"

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