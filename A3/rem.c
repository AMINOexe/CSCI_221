#include <stdio.h>
#include <stdlib.h>
#include "Structs.h"
#include "delete_node.h"

int rem(BST * input,int value){

    if(value < input->root->value){
        delete_node(input->root->right_child,value);
        return 1;
    }
    else if(value > input->root->value){
        delete_node(input->root->left_child,value);
        return 1;
    }
    else if(value == input->root->value){
        delete_node(input->root,value);
        return 1;
    }

    return 0;

} 