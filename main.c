//
//  main.c
//  BinarySearchTree
//
//  Created by duh8n on 2021/07/25.
//

#include <stdio.h>
#include "BinaryTree.h"
#include "BinarySearchTree.h"

int main(int argc, const char * argv[]) {
    // insert code here...
    bNode * tree_root = createNode();
    setData(tree_root, 5);
    
    BSTInsertData(tree_root, 7);
    BSTInsertData(tree_root, 3);
    BSTInsertData(tree_root, 9);
    BSTInsertData(tree_root, 1);
    BSTInsertData(tree_root, 2);
    BSTInsertData(tree_root, 6);
    BSTInsertData(tree_root, 8);

    BSTRemoveData(&tree_root, 9);
    BSTRemoveData(&tree_root, 6);
    
    inTravel(tree_root);
    
    bNode * temp = BSTSearchData(tree_root , 8);
    
    
    return 0;
}
