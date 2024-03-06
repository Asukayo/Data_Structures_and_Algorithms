//
// Created by 86150 on 2024/2/21.
//
#include "stdio.h"

int main(){
    int a[6],sum=0;
    for (int i = 0; i < 6; ++i) {
        scanf("%d",a+i);
    }
    for(int i=0;i<6;++i){
        sum += *(a+i);
        printf("%d,",*(a+i));
    }
    printf("\n");
    printf("sum=%d",sum);


    int (*p)[5],b[10][5];
    p = b;
}