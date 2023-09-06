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

//线索化
//对于先序遍历要注意避免出现循环问题
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

//中序线索二叉树的遍历
//寻找后继节点（分为两种情况）
//p—>rtag == 1 时 p的后继结点就是rchild
//p->rtag == 0 时 1.若右子树为0，则后继节点为NULL，2若右子树不为0，则右子树中最左边的元素即为结点的后继元素

//求线索二叉树中中序序列下的第一个结点
ThreadNode* FirstNode(ThreadTree T){
    while(T->ltag == 0) T = T->lchild;
    return T;
}
//求线索二叉树中中序序列的后继结点
ThreadNode* NextNode(ThreadNode* p){
    if(p->rtag == 0 ){
        return FirstNode(p->rchild);
    }else return p->rchild; //p->rtag == 1 的情况 ,即rtag指向的就是后继节点
}

//According to the two functions above , Throughout the BinTree
void Inorder(ThreadTree T){
    ThreadNode  * a = NULL;
    for (a = T;a!=NULL;a = NextNode(a)) {
        visit(a);
    }
}