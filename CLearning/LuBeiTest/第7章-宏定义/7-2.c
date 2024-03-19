//
// Created by 86150 on 2024/2/20.
//
#include "stdio.h"
#include "stdlib.h"
#include "7-1-1.c"
#define CR printf("\n")
int main(){
    double radius = 10;
    double a = 3,b = 4;
    printf("%f",PI);
    CR;
    printf("rectangleArea=%.2f", rectangleArea(a,b));
    CR;
    printf("CircleArea=%.2f", circleArea(radius));
    CR;
//    printf();
    CR;
}