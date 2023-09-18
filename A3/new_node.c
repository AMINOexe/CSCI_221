#include <stdio.h>
#include <stdlib.h>
#include "Structs.h"


node *new_node(int value)
{
    node *output;
    output = calloc(1, sizeof(node));
    output->value = value;
    output->left_child = NULL;
    output->right_child = NULL;
    return output;
}