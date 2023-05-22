// Created by 86150 on 2023/5/22.


#define MaxLength 255

//定义静态字符串
typedef struct{
    char ch[MaxLength];
    int length;
}SString;

//串的最小基本操作集
//串赋值StrAssign(*T,chars);
//串比较StrCompare(S,T)
//求串长StrLength(S)
//串联接Contact(*T,S,W)
//求子串SubString(*Sub,S,pos,len)

int StrCompare(SString S,SString T){
    for(int i = 1;i<=S.length&&i<=T.length;i++){
        if(S.ch[i]-T.ch[i] !=0){
            return S.ch[i]-T.ch[i];
        }
    }
    //扫描过所有的字符都相同，则长度场的串更大
    return S.length-T.length;
}




