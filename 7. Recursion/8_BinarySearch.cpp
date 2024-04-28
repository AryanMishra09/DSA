/*
Implement binary search using recursion:
*/

#include <iostream>
using namespace std;

bool binarySearch(int arr[], int size, int s, int e, int key){
    if(s>e){
        return false;
    }
    int mid = s + (e-s)/2;
    if(arr[mid]==key){
        return true;
    }else{
        if(arr[mid] < key){
            return binarySearch(arr, size, mid+1, e, key);
        }else{
            return binarySearch(arr, size, s, mid-1, key);
        }
    }
}

int main(){
    int a[5] = {3,6,9,10,20};
    int s = 0, e = 4;
    int key = 20;
    bool ans =  binarySearch(a, 5, s, e, key);
    cout<<ans;
}