//
// Created by 86150 on 2023/9/18.
//

#include <stddef.h>
#include <stdlib.h>

typedef struct{
    int data;
    struct BSTNode* left, *right;
}BSTNode, *BSTree;
//定义二叉排序树

//根据二叉排序树的定义,左子树结点值小于根节点值小于右子树结点值

//二叉排序树的查找算法,最坏的空间复杂度为O(1)
BSTNode* BST_Search(BSTree B,int key){
    while(B != NULL){
        if(B->data == key){
            return B;
        }
        if(B->data > key){
            B = B->left;
        }else{
            B = B->right;
        }
    }
    return B;
}

//二叉排序树的插入算法
int BST_Insert(BSTree* B,int key){
    //创建临时结点
    BSTNode* temp = malloc(sizeof(BSTNode));
    temp->data = key;
    BSTNode** pre = B;   //指向被插入位置的父结点
    while((*B)!=NULL){
        if((*B)->data == key){
            return 0;       //二叉树中已经有该数据，插入失败
        }
        pre = B;        //将前驱结点赋值给pre
        if((*B)->data > key ){
            B = &((*B)->left);
        } else{
            B = &((*B)->right);
        }
    }
    if((*pre)->data > key){
        (*pre)->left = temp;
    } else{
        (*pre)->right = temp;
    }
    return 1;  //插入成功
}

//构建二叉排序树
void Create_BST(BSTree* B,int num[],int n){
    int i = 0;
    for(i = 0;i<n;i++) {
        BST_Insert(B,num[i]);
    }
}