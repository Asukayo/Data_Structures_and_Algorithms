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
    for(int i = 0;i<length-1;i++){
        //外层循环，用来标志循环最终停留在前面哪一个位置
        bool flag = false;
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



int Partition(int A[],int low,int high){
    A[0] = A[low];  //将pivot放入A[0]的位置临时存储
    while(low<high){
        //一轮循环，分别找到一个大于pivot和一个小于pivot的元素并移动到相应的位置上
        while(low<high&&A[high]>=A[0]){high--;}
        A[low] = A[high];    //找到小于A[0]的元素，移动到A[i]的位置上
        while (low<high&&A[low]<=A[0]){low++;}
        A[high] = A[low];
    }
    A[low] = A[0];    //循环结束，将A[0]移动到对应的位置上
    return low;
}

void QuickSort(int A[],int low,int high){
    if(low<high){
        int pivot = Partition(A,low,high);
        QuickSort(A,low,pivot-1);
        QuickSort(A,pivot+1,high);
    }
}