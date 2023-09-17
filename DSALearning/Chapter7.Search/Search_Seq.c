//
// Created by 86150 on 2023/9/17.
//
//顺序查找

typedef struct {
    int *elem;
    int TableLen;
}SSTable;

//线性表的顺序查找
int Search_Seq(SSTable S,int key){
    S.elem[0] = key;    //哨兵
    int i = S.TableLen;
    for(i;S.elem[i]!=key;--i);  //从后往前寻找
    return i;       //如果匹配失败，返回值就是0
}

int Search_Seq_Sorted(SSTable S,int key){
    int i = 0;
    for(i;i<S.TableLen && S.elem[i]>key;i++){
        if(S.elem[i] == key){
            return i;//查找成功
        }
    }
    return -1;       //查找失败
};