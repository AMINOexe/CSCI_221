#include <stdlib.h>
#include <stdio.h>
#include "structs.h"

void free_node(node *input)
{

    if (input->left_child != NULL)
    {
        free_node(input->left_child);
    }

    if (input->right_child != NULL)
    {
        free_node(input->right_child);
    }

    free(input);
}

void free_BST(BST *input)
{
    free_node(input->root);
    free(input);
}