//
// Created by 86150 on 2024/2/18.
//
#include "stdio.h"

int main(){
    int choice; //���ѡ����
    double y;   //���ڴ�ű���

    printf("1 ------����\n");
    printf("2 ------һ����\n");
    printf("3 ------������\n");
    printf("4 ------������\n");
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
    printf("100Ԫ���ڱ�Ϣ��Ϊ:%.2f\n",y);
    printf("Thank u");
    return 0;
}