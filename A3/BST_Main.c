#include <stdio.h>
#include <stdlib.h>
#include "Structs.h"
#include "add.h"
#include "Insert_node.h"
#include "New_BST.h"
#include "new_node.h"
#include "Arr_add.h"


int main()
{

    int arr[]= {4,6,1,5,8,2,9};
    BST * test = arr_add(arr,7);


    //--------Test up to gen 3-----------

    node *root =test->root;
    node *rc = test->root->right_child;
    node *lc = test->root->left_child;
    // node *rc_rc = rc->right_child;
    // node *rc_lc = rc->left_child;
    // node *lc_lc = lc->left_child;
    // node *lc_rc = lc->right_child;

    int vroot = root->value;
    int vrc = rc->value;
    int vlc = lc->value;
    // int vrc_rc = rc_rc->value;
    // int vrc_lc = rc_lc->value;
    // int vlc_lc = lc_lc->value;
    // int vlc_rc = lc_rc->value;


    printf("value at root : %d\n", vroot);
    printf("value at rc : %d\n", vrc);
    printf("value at lc : %d\n", vlc);
    // printf("value at rc_rc : %d\n",vrc_rc);
    // printf("value at rc_lc : %d\n",vrc_lc);
    // printf("value at lc_lc : %d\n",vlc_lc);
    // printf("value at lc_rc : %d\n",vlc_rc);
    


    return 0;
}
