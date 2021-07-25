//
//  BinarySearchTree.h
//  BinarySearchTree
//
//  Created by duh8n on 2021/07/25.
//

#ifndef BinarySearchTree_h
#define BinarySearchTree_h

#include <stdio.h>
#include "BinaryTree.h"

bNode * BSTInsertData(bNode * root, Data data);
bNode * BSTSearchData(bNode * root, Data data);
bNode * BSTRemoveData(bNode ** root, Data data);

#endif /* BinarySearchTree_h */
