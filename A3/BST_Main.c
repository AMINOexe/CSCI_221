#include <stdio.h>
#include <stdlib.h>
#include "Structs.h"
#include "add.h"
#include "Insert_node.h"
#include "New_BST.h"
#include "new_node.h"


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
