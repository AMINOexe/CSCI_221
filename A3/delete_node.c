#include <stdlib.h>
#include <stdio.h>
#include "Structs.h"

void delete_node(node * input,int value){

    if(value=input->value){
        if(input->left_child==NULL && input->right_child==NULL){
            input=NULL;
        }
        else if(input->left_child != NULL){
            input = input->left_child;
        }
        else{
            input = input->right_child;
        }

    }

    if(value<input->value){
        delete_node(input->left_child,value);
    }
    else{
        delete_node(input->right_child,value);
    }
}