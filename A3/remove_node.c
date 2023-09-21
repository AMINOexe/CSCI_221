#include <stdio.h>
#include <stdlib.h>
#include "structs.h"


void delete_node(node *input, int value)
{

    if (value < input->value)
    {
        delete_node(input->left_child, value);
    }
    else if (value > input->value)
    {
        delete_node(input->right_child, value);
    }
    else
    {
        if (value == input->value)
        {
            if (input->left_child == NULL && input->right_child == NULL)
            {
                input = NULL;
            }
            else if (input->left_child != NULL)
            {
                node * right_subtree = input->right_child;

                node * leaf= input->left_child;

                while(leaf->right_child!=NULL){
                    leaf = leaf->right_child;
                }

                leaf->right_child = right_subtree;

                input = input->left_child;
            }
            else
            {
                input = input->right_child;
            }
        }
    }
}


int remove_node(BST * input,int value){

    if(value > input->root->value){
        delete_node(input->root->right_child,value);
        return 1;
    }
    else if(value < input->root->value){
        delete_node(input->root->left_child,value);
        return 1;
    }
    else if(value == input->root->value){
        delete_node(input->root,value);
        return 1;
    }
    else{
        return 0;
    }

} 