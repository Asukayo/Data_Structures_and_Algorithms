//
// Created by 86150 on 2024/3/13.
//

#include "stdio.h"
#include "stdlib.h"

int main(){
    FILE *fp;
    int ch,i=0;
    if(!(fp = fopen("C:\\Users\\86150\\CLionProjects\\Data-Structures-and-Algorithms\\CLearning\\LuBeiTest\\Chapter11-Files\\FileTest.txt","r"))){
        printf("error");
        exit(1);
    }
//    ch = getchar();
//    while (ch!='B'){
//        fputc(ch,fp);
//        ch = getchar();
//    }
    ch = fgetc(fp);
    while(ch!=EOF){
        printf("%c",ch);
        ch = fgetc(fp);
    }
    fclose(fp);
    return 0;
}