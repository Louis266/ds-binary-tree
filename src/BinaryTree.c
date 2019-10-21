//
// Created by 蔡亦华 on 2018/8/22.
//
#include <stdio.h>
#include <stdlib.h>
#include "BinaryTree.h"

void InitBinaryTree(BinaryTree *binary_tree_ptr) {
    *binary_tree_ptr = (BinaryTree *) malloc(sizeof(BNode));
    (*binary_tree_ptr)->leftchild = NULL;
    (*binary_tree_ptr)->rightchild = NULL;
}

void DestroyBinaryTree(BinaryTree binary_tree) {
    if (binary_tree->leftchild != NULL) {
        DestroyBinaryTree(binary_tree->leftchild);
    }
    if (binary_tree->rightchild != NULL) {
        DestroyBinaryTree(binary_tree->rightchild);
    }
    free(binary_tree);
}

void ClearBinaryTree(BinaryTree binary_tree) {
    DestroyBinaryTree(binary_tree->leftchild);
    binary_tree->leftchild = NULL;
    DestroyBinaryTree(binary_tree->rightchild);
    binary_tree->rightchild = NULL;
}

int BinaryTreeEmpty(BinaryTree binary_tree) {
    if (binary_tree->data == NULL) {
        return 1;
    } else {
        return 0;
    }
}

int BinaryTreeDepth(BinaryTree binary_tree) {
    return BinaryTreeDepth(binary_tree->rightchild) > BinaryTreeDepth(binary_tree->leftchild) ?
           BinaryTreeDepth(binary_tree->rightchild) + 1 : BinaryTreeDepth(binary_tree->leftchild) + 1;
}

BNode Root(BinaryTree binary_tree) {
    return  *binary_tree;
}

ElemType Value(BNode node){
    return node.data;
}

void Assign(BNode node, ElemType value){
    node.data = value;
}

BNode Parent(BinaryTree binary_tree, BNode node){
    BNode parent;

}