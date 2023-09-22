#include <stdio.h>
#include <stdlib.h>
#include "string_find.h"
#include "finding_divisors.h"
#include "substring.h"

int main()
{
    //Finding a string  
    char *string_test = string_find("hello", "el", 5, 2);
    printf("string find output: %s\n", string_test);

    //Copying a substring 
    char *sub_test = substring("hello", 0, 2);
    printf("substring output: %s\n", sub_test);



    //Finding divisors 
    int test[] = {1, 2, 3, 4, 5, 6};
    int size_out = total_divisors(test, 6);
    int out1[size_out];
    int out2[size_out];

    finding_divisors(test, 6, out1, out2);

    for (int i = 0; i < size_out; i++)
    {
        printf("%d, ", out2[i]);
    }

    printf("\n");

    for(int j=0;j<size_out;j++){
         printf("%d, ", out1[j]);
    }

    printf("\n");
}