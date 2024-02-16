//
// Created by 86150 on 2023/12/21.
//
#include<iostream>
#include<algorithm>
using namespace std;

// 交换两个元素的值
void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

// 选择三个元素中的中值作为轴值
int choosePivot(int arr[], int low, int high) {
    int mid = (low + high) / 2;
    if (arr[low] > arr[mid])
        swap(low, mid);
    if (arr[low] > arr[high])
        swap(low, high);
    if (arr[mid] > arr[high])
        swap(mid, high);
    return mid;
}

;
int poration(int a[], int low, int high)//用来每次找最中间的那个元素(分割元素)
{

    int pivotpos = choosePivot(a, low, high);
    swap(a[low], a[pivotpos]);
    int pivot = a[low];
    while (low < high)
    {
        while (low < high && a[high] >= pivot) high--;
        a[low] = a[high];
        while (low < high && a[low] <= pivot) low++;
        a[high] = a[low];
    }
    a[low] = pivot;
    return low;
}
void quicksort(int a[], int low, int high)//主要进行递归的函数，用来进行快速排序，quicksort
{
    if (low < high)
    {
        int mid = poration(a, low, high);
        quicksort(a, low, mid - 1);
        quicksort(a, mid + 1, high);
    }
}
int main()
{
    int n;
    cin >> n;
    int a[100];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    quicksort(a, 0, n - 1);
    for (int j = 0; j < n; j++)
        cout << a[j] << " ";
}