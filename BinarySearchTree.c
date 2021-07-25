//
//  BinarySearchTree.c
//  BinarySearchTree
//
//  Created by duh8n on 2021/07/25.
//

#include <stdio.h>
#include <stdlib.h>
#include "BinarySearchTree.h"
#include "BinaryTree.h"

bNode * BSTInsertData(bNode * root, Data data){
    bNode * iNode = createNode();
    setData(iNode, data);
    bNode * cNode;
    bNode * pNode = root;
    
    if(pNode->data == data) return NULL;
    else if(pNode->data > data){
        cNode = getLeftNode(pNode);
    } else{
        cNode = getRightNode(pNode);
    }
    
    while(cNode != NULL){
        pNode = cNode;
        
        if(pNode->data == data) return NULL;
        else if(pNode->data > data){
            cNode = getLeftNode(pNode);
        } else{
            cNode = getRightNode(pNode);
        }
    }
    
    if(pNode->data > data){
        linkLeft(pNode, iNode);
    } else{
        linkRight(pNode, iNode);
    }
    
    return iNode;
}

bNode * BSTSearchData(bNode * root, Data data){
    bNode * pNode, * cNode;
    pNode = root;
    
    while(pNode != NULL){
        if(pNode->data == data) return pNode;
        else if(pNode->data > data)
            cNode = getLeftNode(pNode);
        else cNode = getRightNode(pNode);
        pNode = cNode;
    }
    
    return NULL;
}

bNode * BSTRemoveData(bNode ** root, Data data){
    bNode * pNode, * cNode, * rNode;
    Data rData;
    
    pNode = cNode = *root;
    while(cNode != NULL){
        if(getData(cNode) == data) break;
        else if(getData(cNode) > data){
            pNode = cNode;
            cNode = getLeftNode(pNode);
        }
        else {
            pNode = cNode;
            cNode = getRightNode(pNode);
        }
    }
    
    if(cNode == NULL) return NULL;
    
    rNode = cNode;
    rData = getData(rNode);
    
    if(getLeftNode(rNode) == NULL && getRightNode(rNode) == NULL){
        if(getLeftNode(pNode)==rNode) pNode->left = NULL;
        else pNode->right = NULL;
        
    } else if (getLeftNode(rNode) == NULL || getRightNode(rNode) == NULL){
        if(getLeftNode(rNode)!=NULL) cNode = getLeftNode(rNode);
        else cNode = getRightNode(rNode);
        
        if(getLeftNode(pNode)==rNode) linkLeft(pNode, cNode);
        else linkRight(pNode, cNode);
    } else{
        pNode = rNode;
        cNode = getRightNode(rNode);
        while(getLeftNode(cNode) != NULL){
            pNode = cNode;
            cNode = getLeftNode(cNode);
        }
        setData(rNode ,getData(cNode));
        
        if(getLeftNode(pNode)==cNode) linkRight(pNode, cNode);
        else pNode->right = NULL;
    }
    
    return rNode;
}
