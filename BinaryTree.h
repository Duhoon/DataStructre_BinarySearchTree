//
//  BinaryTree.h
//  BinarySearchTree
//
//  Created by duh8n on 2021/07/25.
//

#ifndef BinaryTree_h
#define BinaryTree_h

#include <stdio.h>

typedef int Data;

typedef struct bNode{
    Data data;
    struct bNode * left;
    struct bNode * right;
} bNode;

bNode * createNode(void);
Data getData(bNode * cnode);
void setData(bNode * cnode, Data data);

bNode * getLeftNode(bNode * pnode);
bNode * getRightNode(bNode * pnode);

bNode * linkLeft(bNode * pnode, bNode * left);
bNode * linkRight(bNode * pnode, bNode * right);

void inTravel(bNode * pnode);

#endif /* BinaryTree_h */
