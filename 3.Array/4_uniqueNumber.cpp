/*
Tou have been given an integer array/list(ARR) of size N. Where N is equal to [2M + 1].
Now, in the given array/list, 'M' numbers are present twice and one number is present only once.
You need to find and return that number which is unique in the array/list.
    Note:
    Unique element is always present in the array/list according to the given condition.
*/


#include <iostream>
using namespace std;

//code done by me:
int findUnique(int arr[], int n){
    for(int i=0;i<n;i++){
        int count = 0;
        for(int j=n-1;j>i;j--){
            if(arr[i] == arr[j]){
                count++;
            }
        }
        if(count==0){
            return arr[i];
        }
    }
}

//code optimized:
int findUniqueNumber(int arr[], int n){
    int ans=0;
    for(int i=0;i<n;i++){
        ans = ans ^ arr[i];
    }
    return ans;
}

int main(){
    int arr[7] = {2,3,89,6,3,6,2};
    int found = findUnique(arr, 7);
    int found1 = findUniqueNumber(arr, 7);
    cout<<"Unique number: "<<found<<endl;
    cout<<"Unique number by optimized code: "<<found1;
}