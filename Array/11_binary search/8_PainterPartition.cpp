/*
Given an array containg boards and ith tearm represent length of ith board.
k is the number of painters.
For painting 1 board unit length it takes 1 unit time.
painters can paint contiguous boards only.
FIND minimum tmie to paint whole array of boards.

NOTE: Refer to copy under binary search.
*/

#include <iostream>
using namespace std;

bool isPossibleSol(int a[], int size, int k, int mid){
    int boardSum = 0;
    int painterCount = 1;
    for(int i=0; i<size; i++){
        if(boardSum + a[i] <= mid){
            boardSum = boardSum + a[i];
        }else{
            painterCount++;
            if(a[i]>mid || painterCount>k){
                return false;
            }
            boardSum = a[i];
        }
    }
}

int painterPartition(int a[], int size, int k){
    int sum = 0;
    for(int i=0; i<size; i++){
        sum = sum + a[i];
    }
    int i=0, j=sum, mid=0, ans=-1;
    while(i<=j){
        mid = i + (j-i)/2;
        if(isPossibleSol(a, size, k, mid)){
            ans=mid;
            j=mid-1;
        }else{
            i=mid+1;
        }
    }
    return ans;
}

int main(){
    int a[4] = {5,5,5,5};
    int k = 2;
    int ans = painterPartition(a, 4, k);
    cout<<"Minimum time to paint whole boards: "<<ans;
}