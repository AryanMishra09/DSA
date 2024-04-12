/*
you are given an array of size "n", contining numbers between 1 and n-1 atleast once. 
There is a single integer value that is present in the array twice. 
Your task is to find duplicate interger value present.

ex: input - [1,2,3,4,4]
    output - 4
*/

#include <iostream>
using namespace std;

int findDuplicates(int arr[], int size){
    int ans = 0;
    for(int i=0;i<size;i++){
        ans = ans^arr[i];
    }

    for(int i=0;i<size;i++){
        ans = ans^i;
    }
    return ans;
}

int main(){
    int a[16] = {1,2,3,4,5,6,7,8,9,10,15,11,13,12,14,8};
    int ans = findDuplicates(a,16);
    cout<<ans;
}