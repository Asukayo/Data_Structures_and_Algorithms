// Created by 86150 on 2024/2/20.
#include "stdio.h"

int main(){
    char c[90],d[90];
    int i,j;
    char tempChar;
    gets(c);
    for(j=0;c[j]!='\0';j++);
    for(i=0,j--;i<(j/2);i++){
        tempChar = c[i];
        c[i] = c[j-i];
        c[j-i] = tempChar;
    }
    for(int i  = 0;i<90;i++){
        d[i] = c[i];
    }
    puts(c);
    puts(d);
}