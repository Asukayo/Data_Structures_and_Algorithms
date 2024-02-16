//
// Created by 86150 on 2024/2/16.
//
#include <time.h>
#include "math.h"
#include "stdio.h"
#include "ctype.h"
#include "stdlib.h"
 int main(){
    int a;
    char b;
    scanf("%4d%c",&a,&b);
//    平方根函数
    printf("sqrta=%f\n",sqrt(a));
//    绝对值函数
     printf("fabsa=%f\n", fabs(a));
//     指数函数
     printf("powa=%f\n",pow(a,a));
//     e的指数函数
     printf("expa=%f\n",exp(a));
//     正弦函数sin
     printf("sina=%08.2f\n\n\n",sin(a));

//     大写字母转为小写字母函数
     printf("toLower=%c\n", tolower(b));
//     检查字母函数，检查数字字符函数,检查数字字母字符函数
     printf("isAlpha=%d, isDigit=%d, isalnum=%d\n\n\n", isalpha(b), isdigit(b), isalnum(b));
//


//      随机数发生函数 初始化随机数发生函数
    printf("randomNum=%d",rand());

     return 0;
}