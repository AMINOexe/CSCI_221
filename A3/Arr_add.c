#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include "add.h"
#include "Structs.h"
#include "New_BST.h"

BST *arr_add(int *input, int size)
{
    BST *output = new_BST();

    if (size == 0)
    {
        return output;
    }

    for (int i = 0; i < size; i++)
    {
        add(output, input[i]);
    }
    return output;
}