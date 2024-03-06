//
// Created by 86150 on 2024/2/28.
//
#include "stdio.h"
struct student3{
    int no;
    char name[10];
    char gender;
    int age;
    char addr[80];
    int score;
};

int main(){
    struct student3 lihong  = {1,"LiHong",'F',36,"HelloStreet63",897};
    printf("%d+%s+%c+%d+%s+%d",lihong.no,lihong.name,lihong.gender,lihong.age,lihong.addr,lihong.score);
}