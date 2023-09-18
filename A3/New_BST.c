#include <stdio.h>
#include <stdlib.h>
#include "Structs.h"



BST *new_BST(){
    BST *output;
    output = calloc(1,sizeof(BST));
    output->size =0;
    output->root=NULL;
    return output; 
}