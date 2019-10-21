//
// Created by 蔡亦华 on 2018/8/22.
//

#ifndef DS_BINARY_TREE_BINARYTREE_H
#define DS_BINARY_TREE_BINARYTREE_H

#endif //DS_BINARY_TREE_BINARYTREE_H

typedef int ElemType;

typedef struct bnode BNode;

struct bnode {
    ElemType data;
    BNode *leftchild;
    BNode *rightchild;
};

typedef BNode *BinaryTree;

void InitBinaryTree(BinaryTree *);

void DestroyBinaryTree(BinaryTree);

void ClearBinaryTree(BinaryTree);

int BinaryTreeEmpty(BinaryTree);

int BinaryTreeDepth(BinaryTree);

BNode Root(BinaryTree);

ElemType Value(BNode);

void Assign(BNode, ElemType);

BNode parent(BinaryTree, BNode);