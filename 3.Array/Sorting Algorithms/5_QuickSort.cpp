/*
Implement Quick sort :
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int partition(int *arr, int s, int e){
    int pivot = arr[s];
    int count=0;
    for(int i=s+1; i<=e; i++){
        if(arr[i]<=pivot){
            count++;
        }
    }
    int pivotIndex = s+count;
    //place pivot at right position:
    swap(arr[pivotIndex],arr[s]);
    //now make the condition that element at left of pivot is smaller and right of pivot is greater:
    while(s < pivotIndex && e > pivotIndex){
        while(arr[s]<pivot){
            s++;
        }
        while(arr[e]>pivot){
            e--;
        }
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
    return pivotIndex;
}

void quickSort(int *arr, int s, int e){
    //base case:
    if(s>=e){
        return;
    }
    //partition:
    int p = partition(arr, s, e);
    //recursive call:
    quickSort(arr, s, p-1);
    quickSort(arr, p+1, e);
}

int main(){
    int arr[17] = {1,98,6,5,7,5,2,9,8,2,69,51,5,646,2,1,5};
    int n = 17;
    quickSort(arr, 0, n-1);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}