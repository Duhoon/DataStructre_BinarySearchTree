//
//  BinaryTree.c
//  BinarySearchTree
//
//  Created by duh8n on 2021/07/25.
//

#include <stdio.h>
#include <stdlib.h>
#include "BinaryTree.h"

bNode * createNode (){
    bNode * cnode = (bNode *)malloc(sizeof(bNode));
    cnode->left = NULL;
    cnode->right = NULL;
    cnode->data = -1;
    return cnode;
}

Data getData(bNode * cnode){
    return cnode->data;
}

void setData(bNode * cnode, Data data){
    cnode->data = data;
}

bNode * getLeftNode(bNode * pnode){
    return pnode->left;
}

bNode * getRightNode(bNode * pnode){
    return pnode->right;
}

bNode * linkLeft(bNode * pnode, bNode * left){
    pnode->left = left;
    return pnode;
}

bNode * linkRight(bNode * pnode, bNode * right){
    pnode->right = right;
    return pnode;
}

void inTravel(bNode * pnode){
    if(pnode != NULL){
        inTravel(pnode->left);
        printf("%d ", pnode->data);
        inTravel(pnode->right);
    }
}
