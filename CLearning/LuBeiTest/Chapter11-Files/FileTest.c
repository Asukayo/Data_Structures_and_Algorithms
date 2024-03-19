//
// Created by 86150 on 2024/3/10.
//
#include "stdio.h"
#define  CR printf("\n")
int main(){
    char cha[10];
    gets(cha);
    FILE *fp;
    fp = fopen("C:\\Users\\86150\\CLionProjects\\Data-Structures-and-Algorithms\\CLearning\\LuBeiTest\\Chapter11-Files\\FileTest.txt",
               "w+");
    for(int i =  0;cha[i]!='\0';i++){
        printf("%c%d,",cha[i],fputc(cha[i],fp));
    }
    CR;
    printf("a,%c,b", fgetc(fp));
    CR;
    printf("%s",cha);
//    char ch = fgetc(fp);
//    while (!feof(fp)){
//        putchar(ch);
//        ch = fgetc(fp);
//    }
}