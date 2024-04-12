/*
Yiou are given with an array of 0 & 1.
Sort the array such that 0 will be in left side and 1 will be in right side
*/

#include <iostream>
using namespace std;

void sort(int arr[], int size){
    int i=0, j=size-1;
    while(i<j){
        while(arr[i]==0){
            i++;
        }
        while(arr[j]==1){
            j--;
        }
        // in this point a[i]=1 and a[j]=0
        if(i<j){
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int a[8] = {0,1,0,0,1,1,0,1};
    sort(a,8);
    return 0;
}