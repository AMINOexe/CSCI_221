#ifndef STRUCTS_H
#define STRUCTS_H

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


#endif