#include <iostream>
using namespace std;

void mergeTwoSortedArrayInplace(int arr[], int start, int mid, int end){
    int i=start, j=mid+1;
    while(i<j && j<=end){
        if(arr[i]<=arr[j]){
            i++;
        } else {
           int value=arr[j];
           int k=j;
           while(k>i){
            arr[k]=arr[k-1];
            k--;
           }
           arr[i]=value;
           j++;
           i++;
        }
    }
}


void mergeTwoSortedArray(int arr[], int start, int mid, int end){
    int leftArraySize=mid-start+1;
    int rightArraySize=end-mid;

    // create empty left and right array
    int *leftArray=new int[leftArraySize];
    int *rightArray=new int[rightArraySize];

    // fill the left and right array
    int index=start;
    for(int i=0;i<leftArraySize;i++){
        leftArray[i]=arr[index++];
    }
    for(int i=0;i<rightArraySize;i++){
        rightArray[i]=arr[index++];
    }

    // create new array for storing merged array
    index=start;
    int i=0; // left array index
    int j=0; // right array index
    while(i<leftArraySize && j<rightArraySize){
        if(leftArray[i]<rightArray[j])
            arr[index++]=leftArray[i++];
        else
            arr[index++]=rightArray[j++];
    }

    while(i<leftArraySize) arr[index++]=leftArray[i++];
    while(j<rightArraySize) arr[index++]=rightArray[j++];

    delete [] leftArray;
    delete [] rightArray;

}

void mergeSort(int arr[], int start, int end){
    // 1. base case
    if(start>=end) return;

    // 2. proccessing
    int mid= start + (end-start)/2;


    // 3. recursive call

    // left merge
    mergeSort(arr, start, mid);

    // right merge
    mergeSort(arr, mid+1, end);

    // mergeTwoSortedArray(arr, start, mid, end);

    mergeTwoSortedArrayInplace(arr, start, mid, end);
}

int main() 
{
    // merge sort code
    int arr[]={10,54,23,89,67,50,40,2,0};
    // int arr[]={12,33,45,66,16,37,40,45};
    int size=8;
    int start=0, end=size-1;
    for(int i=0;i<size;i++) cout<<arr[i]<<" ";
    cout<<endl;
    mergeSort(arr, start, end);
    for(int i=0;i<size;i++) cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}