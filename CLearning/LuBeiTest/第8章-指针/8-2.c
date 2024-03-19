//
// Created by 86150 on 2024/2/22.
//
#include "stdio.h"

int main(){
    char s[20],*p;
    scanf("%s",s);
    for(p = s;(*p)!='\0';p++){
        if((*p)>='A'&&(*p)<='V'){
            (*p) = (*p)+4;
        }else if((*p)>='W'&&(*p)<='Z'){
            (*p) = (*p) - 22;
        }
    }
    printf("%s",s);
}