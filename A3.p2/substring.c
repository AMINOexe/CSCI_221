#include <stdlib.h>
#include <stdio.h>


char * substring(char * input, int start, int end){
    int count=0;

    char *output= calloc((end-start),sizeof(char));
    for(int i=start;i<end;i++){
        output[count]= input[i];
        count++;
    }

    return output;
}
