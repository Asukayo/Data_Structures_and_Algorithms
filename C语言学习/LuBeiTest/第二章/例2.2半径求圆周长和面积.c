#include <stdio.h>
#define PI 3.1416926

int main(){
    double  r,k,s;
    scanf("%lf",&r);
    k = 2*PI*r;
    s = r*r*PI;
    printf("circle:%.2f area: %.2f\n",k,s); //%.2f表示保留两位小数
    return 0;
}
