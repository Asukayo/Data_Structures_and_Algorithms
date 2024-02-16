//
// Created by 86150 on 2024/2/16.
//
#include "stdio.h"
int main(){
    int t,h,m,s;
    scanf("%d:%d:%d",&h,&m,&s);
    t = h*3600 +m *60+s;
    printf("%d\n",t);

}