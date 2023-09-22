#include <stdlib.h>
#include <stdio.h>
#include "substring.h"

char *string_find(char *str_1, char *str_2, int str_1_size, int str_2_size)
{

    int count = 0;
    char *output = calloc(str_2_size+1, sizeof(char));

    for (int i = 0; i < str_1_size - str_2_size; i++)
    {
        char *substr = substring(str_1, i, i + (str_2_size));

        int flag = 0;
        for(int j=0;j<str_2_size;j++){
            if(substr[j]!= str_2[j]){
                flag = 1;
            }
        }

        if(flag == 0){
            return &str_1[i];
        }
        
    }
    return NULL;
    
}