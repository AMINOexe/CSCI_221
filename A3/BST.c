#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    struct node *left_child;
    struct node *right_child;
    int value;
} node;


typedef struct
{
    int size;
    node *root;
} BST;



node *new_node(int value)
{
    node *output;
    output = calloc(1, sizeof(node));
    output->value = value;
    output->left_child = NULL;
    output->right_child = NULL;
    return output;
}



BST * new_BST(){
    BST * output;
    output = calloc(1,sizeof(BST));
    output->size =0;
    output->root=NULL;
    return output; 
}



node *insert_node(node *root, int value)
{
    if (root == NULL)
    {
        root = new_node(value);
    }
    else if (value < root->value)
    {
        root->left_child = insert_node(root->left_child, value);
    }
    else if (value > root->value)
    {
        root->right_child = insert_node(root->right_child, value);
    }
    else
    {
        printf("Equal");
    }
    return root;
}



void add(BST *input, int value)
{
    if (input->root == NULL)
    {
        input->root = new_node(value);
        input->size += 1;
    }
    else if (value < input->root->value)
    {
        input->root->left_child = insert_node(input->root->left_child, value);
        input->size += 1;
    }
    else if (value > input->root->value)
    {
        input->root->right_child = insert_node(input->root->right_child, value);
        input->size += 1;
    }
    else
    {
        printf("Equal");
    }
}




int main()
{

    BST *test = new_BST();
    
    add(test, 5);
    add(test, 6);
    add(test, 7);

    node *output = test->root->right_child;
    node *output2 = output->right_child;
    int value_out = output2->value;

    printf("Value Out: %d\n", value_out);
    printf("BST size: %d\n", test->size);

    return 0;
}
