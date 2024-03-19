//
// Created by 86150 on 2024/3/13.
//
#include "stdio.h"
#include "ctype.h"

int main(){
    FILE *fp;
    int n1,n2,n3,n4;
    char ch;
    n1 = n2 = n3 = n4 =0;
    fp = fopen("C:\\Users\\86150\\CLionProjects\\Data-Structures-and-Algorithms\\CLearning\\LuBeiTest\\Chapter11-Files\\FileTest.txt","r");
    ch = fgetc(fp);
    while(ch!=EOF){
        if(isalpha(ch)) n1++;
        else if(isdigit(ch)) n2++;
        else if(isspace(ch)) n3++;
        else n4++;
        ch = fgetc(fp);
    }
    fclose(fp);

    fp = fopen("C:\\Users\\86150\\CLionProjects\\Data-Structures-and-Algorithms\\CLearning\\LuBeiTest\\Chapter11-Files\\FileTest.txt","a");
    fprintf(fp,"\n//alpha number = %d\n",n1);
    fprintf(fp,"//digit number = %d\n",n2);
    fprintf(fp,"//space number = %d\n",n3);
    fprintf(fp,"//\\other = %d",n4);
    fclose(fp);
}