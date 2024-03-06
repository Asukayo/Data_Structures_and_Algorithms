//
// Created by 86150 on 2024/2/16.
//
#include <stdio.h>
int main(){
    int a = 27;
    //输出8，10，16进制
    printf("a_8=%o,a_10=%d,a_16=%X\n",a,a,a);
    printf("a_8=%5o,a_10=%5d,a_16=%5X",a,a,a);  //%5d指定a的输出宽度占5列


    printf("\n\n\n");
//    输出double、float型变量
    float  f = 314.15;
    double d = 3.1415926;
    printf("f=%f,f=%e\n",f,f);
    printf("d=%f,d=%e\n",d,d);
    printf("d=%-6.3f,d=%6.2f,d=%.3f\n",d,d,d);   //输出宽度为6列，保留三位小数

    return 0;
}