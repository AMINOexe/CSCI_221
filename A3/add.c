#include <stdio.h>
#include <stdlib.h>
#include "Structs.h"
#include "new_node.h"
#include "Insert_node.h"

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