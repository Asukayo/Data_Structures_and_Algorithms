#include <stdio.h>
#include <cstdlib>

//
// Created by 86150 on 2023/11/29.
//
typedef struct Lnode{
    int data;
    struct Lnode* next;
}Lnode,*Linklist;

void Change(Linklist &L){
    //测试1
//    Linklist tempL = L;
//    tempL = L->next;
//    tempL->data = 2;
//    tempL->next = (Linklist)malloc(sizeof(Lnode));
//    tempL->next->data = 3;
//    tempL->next->next = NULL;
    //测试2
    Linklist temp = (Linklist) malloc(sizeof(Lnode));
    temp->data = 10;
    temp->next = L->next;
    L->next = temp;
}

int main(){
   Linklist L = (Linklist)malloc(sizeof(Lnode));
   L->data = 1;
   Lnode* Lnext = (Lnode*)malloc(sizeof(Lnode));
   Lnext->data = 2;
   Lnext->next = NULL;
   L->next = Lnext;
   printf("%d",L->data);
   Change(L->next);
   printf("%d",L->data);
   printf("%d",L->next->data);
   printf("%d",L->next->next->data);
   return 0;
}