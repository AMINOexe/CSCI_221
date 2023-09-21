#include <stdio.h>
#include <stdlib.h>
#include "structs.h"

node *new_node(int value)
{
    node *output;
    output = calloc(1, sizeof(node));
    output->value = value;
    output->left_child = NULL;
    output->right_child = NULL;
    return output;
}

BST *new_BST(){
    BST *output;
    output = calloc(1,sizeof(BST));
    output->size =0;
    output->root=NULL;
    return output; 
}