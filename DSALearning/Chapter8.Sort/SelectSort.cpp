//
// Created by 86150 on 2023/10/1.
//

void swap(int &A,int &B){
    int temp = A;
    A = B;
    B = temp;
}

void SelectSort(int A[],int length){
    for(int i = 0;i<length-1;i++){
        //只需要进行n-1次遍历就可以排序完成
        int min = i;
        for(int j = i+1;j<length;j++){
            if(A[j]<A[min]){
                min = j;
            }
        }
        if(i!=min){
            swap(A[i],A[min]);
        }
    }
}