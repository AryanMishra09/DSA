/*
Given an array of integers arr, return true if the number of occurrences of each value in the array is unique or false otherwise.
Example 1:
Input: arr = [1,2,2,1,1,3]
Output: true
Explanation: The value 1 has 3 occurrences, 2 has 2 and 3 has 1. No two values have the same number of occurrences.
*/


//code abhi krna h abhi hua nhi h aage ke concepts se banega hashmaps and all. 


#include <iostream>
using namespace std;

bool uniqueOccurence(int arr[], int n){
    int result=0;
    for(int i=0;i<n;i++){
        result = result ^ arr[i];
    }
    cout<< result<<endl;
    return true;
}

int main(){
    int arr[7] = {1,2,2,1,1,3};
    bool unique = uniqueOccurence(arr, 6);
    cout<<unique;
}