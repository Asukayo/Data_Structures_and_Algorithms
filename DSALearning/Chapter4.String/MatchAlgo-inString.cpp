//
// Created by 86150 on 2023/6/5.
//
#define MaxLength 255

//定义静态字符串
typedef struct{
    char ch[MaxLength];
    int length;
}SString;

//朴素模式匹配算法
int Index(SString S,SString B){
    int i = 1,j = 1;
    while(i<=S.length && j<=B.length){
        if(S.ch[i]==B.ch[j]){
            i++;
            j++;
        }else{
            i = i-j+2;
            j = 1;
        }
    }
    if(j>B.length){
        return i-B.length;
    }else{
        return 0;
    }
}