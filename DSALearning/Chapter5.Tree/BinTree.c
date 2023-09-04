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

//---------遍历二叉树--------
void visit(BinTree B);
//前序遍历
void PreOrder(BinTree B){
    if(B !=NULL){
        visit(B);
        PreOrder(B->lchild);
        PreOrder(B->rchild);
    }
}
//中序和后序遍历都是改变Visit的位置

//利用辅助队列按层次遍历二叉树
//定义辅助队列
typedef struct
{
    BiTNode* data;   //数据域
    struct LinkNode * next;    //后驱元素指针
}LinkNode;

//真正的链式队列只包含一个头指针与一个尾指针
typedef struct
{
    LinkNode * front , *rear;   //定义的时候不能忘记rear前面的*
}*LinkQueue;

void FloorOrder(BinTree B){
    LinkQueue Q;
    Q->front->data = B;
    while(Q!=NULL){
        //1.将队列头部R元素出队
        //2.并对头部元素进行访问
        if(Q->front->data->rchild!=NULL){
            //将左右孩子入队
        }
    }
}