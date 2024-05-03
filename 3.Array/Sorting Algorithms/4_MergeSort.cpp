/*
Implement merge sort
*/

#include <iostream>
using namespace std;

void merge(int *arr, int s, int e){
    int mid = s+(e-s)/2;
    int len1 = mid - s + 1;
    int len2 = e - mid; 

    int *left = new int[len1];
    int *right = new int[len2]; 

    //copy right and left values in array:
    int mainArrayIndex = s;
    for(int i=0; i<len1; i++){
        left[i] = arr[mainArrayIndex];
        mainArrayIndex++; 
    }
    mainArrayIndex = mid+1;
    for(int i=0; i<len2; i++){
        right[i] = arr[mainArrayIndex];
        mainArrayIndex++; 
    }

    //merge 2 sorted array: 
    int index1=0;
    int index2=0;
    mainArrayIndex = s;
    while(index1 < len1 && index2 < len2){
        if(left[index1] < right[index2]){
            arr[mainArrayIndex++] = left[index1++]; 
        }else{
            arr[mainArrayIndex++] = right[index2++];
        }
    }

    while(index1 < len1){
        arr[mainArrayIndex++] = left[index1++]; 
    }
    while(index2 < len2){
        arr[mainArrayIndex++] = right[index2++];
    }

}

void mergeSort(int *arr, int s, int e){
    //base case
    if(s>=e){
        return;
    }
    int mid = s + (e-s)/2;
    //mergeSort in left side
    mergeSort(arr, s, mid);
    //mergeSort in right side
    mergeSort(arr, mid+1, e);

    //merge both array:
    merge(arr, s, e);
}

int main(){
    int arr[12] = {3,5,8,9,6,7,1,5,6,89,25,3};
    int n = 12;

    mergeSort(arr, 0, n-1);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<' ';
    }
}