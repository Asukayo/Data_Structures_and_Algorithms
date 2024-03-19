//
// Created by 86150 on 2024/2/27.
//
#include "stdio.h"
#include "string.h"

char *search(char **list,char* name,int n){
    for(int i = 0;i<n;i++){
        if(strcmp(list[i],name)==0){
            return list[i];
        }
    }
    return NULL;
}

int main(){
    char *list[5] = {"John","Emily","Jack","Tom","Jerry"};

    char name[20];
    scanf("%s",name);  //此处的name不可以定义为 char* name;
    printf("%s", search(list,name,5));
}