#include <iostream>
using namespace std;

int partition(int *arr, int low, int high){
    int pivot=arr[low];
    int i=low, j=high;
    while(i<j){
        while(arr[i]<=pivot and i<=high-1){
            i++;
        }
        while(arr[j]>pivot and j>=low+1){
            j--;
        }
        if(i<j){
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[low], arr[j]);
    return j;
}

void quickSort(int*arr, int low, int high){
    if (low>=high) return;
    int partitionIndex=partition(arr, low, high);
    quickSort(arr, low, partitionIndex-1);
    quickSort(arr, partitionIndex+1, high);
}

int main() 
{
    int arr[10]={7,3,5,4,6,9,1,0,2,8};
    quickSort(arr, 0, 9);
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    return 0;
}