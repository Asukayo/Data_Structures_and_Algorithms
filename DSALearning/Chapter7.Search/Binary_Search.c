//
// Created by 86150 on 2023/9/17.
//
typedef struct {
    int *elem;
    int TableLen;
}SSTable;

//二分查找
int Binary_Search(SSTable S,int key){
    int low  = 0,high = S.TableLen-1,mid;
    while(low<=high){
        mid = (low+high)/2;     //取中间位置
        if(S.elem[mid]==key){
            return mid;
        }else if(S.elem[mid]<key){
            high = mid -1;      //从前边部分继续查找
        }else{
            low = mid + 1;      //从后半部分继续查找
        }
    }
    return -1;  //查找失败
}
