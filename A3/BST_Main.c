#include <stdio.h>
#include <stdlib.h>
#include "structs.h"
#include "add.h"
#include "BST_init.h"
#include "arr_add.h"
#include "remove_node.h"

int main()
{

    int arr[] = {6, 3, 8, 5, 2, 7, 9, 1, 4};
    BST *test = arr_add(arr, 9);

    int a = remove_value(test, 3);
    printf("nodes removed: %d\n",a);

    //--------Test up to gen 3-----------

    node *root = test->root;
    node *rc = test->root->right_child;
    node *lc = test->root->left_child;
    // node *rc_rc = rc->right_child;
    // node *rc_lc = rc->left_child;
    node *lc_lc = lc->left_child;
    node *lc_rc = lc->right_child;

    int vroot = root->value;
    int vrc = rc->value;
    int vlc = lc->value;
    // int vrc_rc = rc_rc->value;
    // int vrc_lc = rc_lc->value;
    int vlc_lc = lc_lc->value;
    int vlc_rc = lc_rc->value;

    printf("value at root : %d\n", vroot);
    printf("value at rc : %d\n", vrc);
    printf("value at lc : %d\n", vlc);
    // printf("value at rc_rc : %d\n",vrc_rc);
    // printf("value at rc_lc : %d\n",vrc_lc);
    printf("value at lc_lc : %d\n", vlc_lc);
    printf("value at lc_rc : %d\n", vlc_rc);

    return 0;
}
