#include <stdlib.h>
#include <stdio.h>
#include "add.h"
#include "Structs.h"
#include "New_BST.h"

int qsort_compare(const void *a, const void *b)
{
    int *x = (int *)a;
    int *y = (int *)b;
    return *x - *y;
}

BST *arr_add(int *input, int size)
{
    BST *output = new_BST();

    qsort(input, size, sizeof(int), qsort_compare);

    int mid_position = size/2;

    add(output,input[mid_position]);

    for (int i = 0; i < size; i++)
    {
        if (i != mid_position)
        {
            add(output, input[i]);
        }
    }
    return output;
}