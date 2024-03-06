//
// Created by 86150 on 2024/2/18.
//
#include "stdio.h"

int main(){
    int choice; //存放选择编号
    double y;   //用于存放本利

    printf("1 ------活期\n");
    printf("2 ------一年期\n");
    printf("3 ------三年期\n");
    printf("4 ------五年期\n");
    printf("Please Enter Choice[1-4]:  ");
    scanf("%d",&choice);

    switch (choice) {
        case 1: y= 100*(1+0.0036*1);
            break;
        case 2: y= 100*(1+0.0225*1);
            break;
        case 3: y= 100*(1+0.0333*3);
            break;
        case 4: y= 100*(1+0.0360*5);
        default:
            printf("Sorry,wrong Choice");

    }
    printf("100元到期本息和为:%.2f\n",y);
    printf("Thank u");
    return 0;
}