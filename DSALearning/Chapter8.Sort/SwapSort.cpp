//
// Created by 86150 on 2023/9/25.
//

void swap(int &A,int &B){
    int temp = A;
    A = B;
    B = temp;
}

//冒泡排序
//从后往前遍历线性表，每一次遍历都能找到一个最小的元素
//当不产生交换的时候，表明元素已经有序
int* BubblingSort(int A[],int length){
    bool flag = false;
    for(int i = 0;i<length-1;i++){
        //外层循环，用来标志循环最终停留在前面哪一个位置
        for (int j = length-1; j >=i+1 ; j--) {
            if (A[j-1] >A[j]){
                swap(A[j-1],A[j]);
                flag = true;
            }
            if(!flag){
                return A;
            }
        }
    }
    return A;
}