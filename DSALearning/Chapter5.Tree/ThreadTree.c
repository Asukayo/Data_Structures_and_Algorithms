//
// Created by 86150 on 2023/9/6.
//
#include <stddef.h>

//线索二叉树的存储结构
 typedef struct ThreadNode{
    int data;   //数据域指针
    struct ThreadNode* lchild,*rchild;      //左右孩子结点
    int ltag,rtag;                          //标志左右结点是否被线索化
}ThreadNode ,*ThreadTree;

//全局变量pre 用来指向当前结点的上一结点
ThreadNode* pre ;
ThreadNode* p;  //used to refer present node

//对中序遍历序列进行线索化
//对结点进行线索化
void visit(ThreadNode *A){
    //如果左子树为空,则建立前驱线索
    if(A->lchild==NULL){
        A->lchild = pre;
        A->ltag = 1;    //表示已经被线索化
    }
    //如果右子树为空，则建立后驱线索
    if(pre !=NULL&&pre->rchild == NULL){
        pre->rchild = A;
        pre->rtag = 1;      //表示已经被线索化
    }
    pre = A;
}
//中序遍历二叉树
void InThread(ThreadTree T){
    if(T!=NULL){
        InThread(T->lchild);
        visit(T);
        InThread(T->rchild);
    }
}
//主体函数
ThreadTree* CreateInThread(ThreadTree T){
    pre = NULL;     //初始化pre指针
    p = T;
    if(T!=NULL){
        InThread(T);
    }
    //对最后一个结点建立后驱线索
    if(pre->rchild == NULL){
        pre->rtag = 1;
    }
    return T;
}
