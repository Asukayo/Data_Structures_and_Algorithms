//
// Created by 86150 on 2023/5/21.
//
#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

#define MAXSIZE 50
struct ElemType{
    int value;
};
//二叉树的顺序存储结构，只适合存储满二叉树和完全二叉树
typedef struct TreeNode{
    bool Flag;      //用来表示该结点是否为结点
    struct ElemType elemType;
};

struct TreeNode t[MAXSIZE];


//二叉树的链式存储结构
typedef struct BiTNode{
    struct ElemType elem;
    struct BiTNode* lchild, *rchild;
}BiTNode, *BinTree;

//定义一棵空树

struct BiTNode* root = NULL;
int main(){
    root = (BiTNode *)malloc(sizeof(BiTNode));
    printf("Hello World\n");
    return 0;
}

//对于顺序存储的二叉树，查找i和j两个结点的最近的公共祖先的值
int IndexSameAncestor(int i ,int j){
    if(i>MAXSIZE||j>MAXSIZE){
        return 0;
    }
    while(i !=j){
        if(i>j){
            i = i/2;
        } else{
            j = j/2;
        }
    }
    return i;
}