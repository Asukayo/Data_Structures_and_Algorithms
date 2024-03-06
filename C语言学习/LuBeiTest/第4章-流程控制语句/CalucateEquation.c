//
// Created by 86150 on 2024/2/18.
//
#include "stdio.h"
#include "math.h"
int main(){
    double a,b,c,delta;
    double x1,x2,real,img;
    printf("Please input a,b,c:\n");
    scanf("%lf%lf%lf",&a,&b,&c);
    if(a==0){
        printf("Not Equation\n");
    } else{
        delta = b*b-4*a*c;
        if(delta>=0){
            x1=(-b + sqrt(delta))/(2*a);
            x2=(-b - sqrt(delta))/(2*a);
            printf("x1=%.2f\n",x1);
            printf("x2=%.2f",x2);
        } else{
            real = -b/(2*a);
            img = sqrt(fabs(delta))/(2*a);
            printf("x1=%.2f+%.2fi\n",real,img);
            printf("x1=%.2f-%.2fi",real,img);
        }
    }
    return 0;
}