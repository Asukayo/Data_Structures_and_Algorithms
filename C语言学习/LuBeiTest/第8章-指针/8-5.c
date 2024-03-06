//
// Created by 86150 on 2024/2/27.
//
#include "stdio.h"
#include "math.h"

double max(double a,double b){
    return a>b?a:b;
}

int main(){
    double (*p) (double,double);
    double x1,x2;
    p = pow;
    x1 = p(5,3);
    printf("x1=%.2f\n",x1);
    p = max;
    x2 = max(5,3);
    printf("x2 = %.2f\n",x2);


    //练习题
//    int c,*q;
//    c = 2;
//    q = &c;
//    c =*q++;
//    printf("c = %d,p =%d" ,c,*q);

    int a[4][4] = {{1,2,3,4},{5,6,7,8}};
    printf("%d",**(a+1));
}