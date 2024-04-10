/*
You are given rotated sorted array.
you have to search in that array in O(logn) time complexity.
ex- input : [7,9,17,1,3], k=3
    output: 4
*/

#include <iostream>
using namespace std;

int search(int a[],int size, int k){
    int i=0, j=size-1, mid=0;
    while(i<=j){
        mid = i + (j-i)/2;
        if(a[mid]==k){
            return mid;
        }
        else if(a[j]>=k){
            i=mid+1;
        }
        else{
            j=mid-1;
        }
    }
    return -1;
}

int main(){
    int a[7] = {7,9,17,1,3,4,5};
    int k = 5;
    int index = search(a,7,k);
    if(index==-1){
        cout<<"Element not found"<<endl;
    }else{
        cout<<"Element found at index: "<<index<<endl;
    }
    return 0;
}