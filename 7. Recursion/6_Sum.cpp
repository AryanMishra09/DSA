/*
find the sum of array using recursion
*/

#include <iostream>
using namespace std;

//approach1: 
int sum(int arr[], int size, int sum1=0){
    if(size==0){
        return sum1;
    }
    sum1 = sum1 + arr[0];
    return sum(arr+1, size-1, sum1);

}

int sum2(int arr[], int size){
    if(size==0){
        return 0;
    }
    if(size==1){
        return arr[0];
    }
    return arr[0] + sum2(arr+1, size-1);
    
}

int main(){
    int arr[5] = {1,1,1,1,1};
    int ans = sum2(arr,5);
    cout<<ans;
}