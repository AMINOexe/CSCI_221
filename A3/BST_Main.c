#include <stdio.h>
#include <stdlib.h>
#include "structs.h"
#include "add.h"
#include "BST_init.h"
#include "arr_add.h"
#include "remove_node.h"
#include "free_BST.h"

int main()
{

    int arr[] = {6, 3, 8, 5, 2, 7, 9, 1, 4};
    BST *test = arr_add(arr, 9);

    //--------Test up to gen 3-----------


    printf("---------BST Creation----------\n");
    node *root = test->root;
    node *rc = test->root->right_child;
    node *lc = test->root->left_child;
    node *lc_lc = lc->left_child;
    node *lc_rc = lc->right_child;

    int vroot = root->value;
    int vrc = rc->value;
    int vlc = lc->value;
    int vlc_lc = lc_lc->value;
    int vlc_rc = lc_rc->value;

    printf("value at root : %d\n", vroot);
    printf("value at rc : %d\n", vrc);
    printf("value at lc : %d\n", vlc);
    printf("value at lc_lc : %d\n", vlc_lc);
    printf("value at lc_rc : %d\n", vlc_rc);

    printf("-------After deletion-------\n");


    int a = remove_value(test, 3);

    int root_value = test->root->value;
    int left_value = test->root->left_child->value;
    int right_value = test->root->right_child->value; 
    int left_left_value = test->root->left_child->left_child->value;
    int right_right_value = test->root->right_child->right_child->value;

    printf("nodes removed: %d\n\n", a);
    printf("value at root : %d\n", root_value);
    printf("value at rc : %d\n", right_value);
    printf("value at lc : %d\n", left_value);
    printf("value at lc_lc : %d\n", left_left_value);
    printf("value at lc_rc : %d\n", right_right_value);

    printf("-------After free function-------\n");
    free_BST(test);
    printf("test root: %d\n", test->root->value);

    return 0;
}
