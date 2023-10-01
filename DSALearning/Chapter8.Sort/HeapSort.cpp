//
// Created by 86150 on 2023/10/1.
//

#include "SwapSort.cpp"

//进行堆排序的三部曲
//1.建立大根堆 时间复杂度为O（n）
//2.每一次输出一个最大的元素（将A[1]和树的最后一个元素交换）
//3.重新调整大根堆，待调整元素从1开始

void HeadAdjust(int A[],int k,int length){
    A[0] = A[k];    //先将待调整元素放在A[0]的位置
    for(int i = 2*k;i<=length;i = i*2){
        if(i<length&&A[i]<A[i+1]){
            i++;    //第一次比较,若右孩子的元素比左结点大则加一，令i指针指向右节点
        }
        if(A[0]>=A[i]) break;       //第二次比较，若根节点大于等于左右孩子结点，则不需要进行调整直接跳出循环
        else{
            A[k] = A[i];            //此时根节点小于左右孩子，将最大的元素移到根节点位置，使其满足大根堆的要求
            k = i;                  //再将下一个待插入的位置调整，检查此次调整是否破坏了大根堆,以便于向下继续筛选
        }
    }
    A[k] = A[0];    //循环结束，此时已经将树遍历完毕，将待插入元素重新插回
}

void BuildMaxHeap(int A[],int length){
    //建立大根堆
    for(int i = length/2;i>0;i--){
        //从1/2处开始进行遍历，确保每一个小子树都满足大根堆的要求
        HeadAdjust(A,i,length);
    }
}

void HeapSort(int A[],int length){
    //进行堆排序
    //首先要建立大/小根堆
    BuildMaxHeap(A,length);
//    建立完堆之后在进行遍历，每次将根节点与最后一个元素互换位置，然后再重新调整堆
    for (int i = length; i>1; i--) {
        swap(A[length],A[1]);
        HeadAdjust(A,1,length-1);
    }
}