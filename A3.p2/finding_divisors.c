#include <stdlib.h>
#include <stdio.h>

void finding_divisors(int *input, int size, int *denom_out, int *num_out)
{

    int count = 0;
    for (int a = 0; a < size; a++)
    {
        for (int b = 0; b < size; b++)
        {

            if ((a != b) && input[a] % input[b] == 0)
            {
                num_out[count] = input[a];
                denom_out[count] = input[b];
                count++;
            }
        }
    }
}

int total_divisors(int *input, int size)
{

    int size_out = 0;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if ((i != j) && input[i] % input[j] == 0)
            {
                size_out++;
            }
        }
    }
    return size_out;
}