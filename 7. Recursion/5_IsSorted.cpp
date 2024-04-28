
/*
Find if the array is sorted or not using recursion:
*/

#include <iostream>
using namespace std;

bool isSorted(int arr[], int size){
    if(size==0 || size==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }else{
        return ans isSorted(arr+1, size-1);
    }
   
    
}

int main(){
    int arr[6] = {3,5,6,7,8,9};
    bool a = isSorted(arr, 6);
    cout<<a;
}