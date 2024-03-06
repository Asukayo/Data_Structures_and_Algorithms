//
// Created by 86150 on 2024/2/26.
//

//拼接两个字符串
#include "stdio.h"

int main(){
    char a[50],b[50];
    char *myPJString(char *a,char *b);
    gets(a);
    gets(b);
    printf("%s,%s\n",a,b);
    printf("%s", myPJString(a,b));
    return 0;
}

char * myPJString(char *a,char *b){
    char *p = a;
    for(a;(*a)!='\0';a++);
    for(;(*b)!='\0';b++,a++){
        (*a) = (*b);
    }
    (*a) = '\0';
    return p;
}