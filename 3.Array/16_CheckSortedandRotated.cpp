/*                                                                                                                                       
                                                Check if Array Is Sorted and Rotated

Given an array nums, return true if the array was originally sorted in non-decreasing order, then rotated some number of positions (including zero). Otherwise, return false.
There may be duplicates in the original array.
Note: An array A rotated by x positions results in an array B of the same length such that A[i] == B[(i+x) % A.length], where % is the modulo operation.

Example 1:

Input: nums = [3,4,5,1,2]
Output: true
Explanation: [1,2,3,4,5] is the original sorted array.
You can rotate the array by x = 3 positions to begin on the the element of value 3: [3,4,5,1,2].
*/

#include <iostream>
using namespace std;

void checkSortedRotated(int a[], int size){
    int count = 0;
    for(int i=1; i<size; i++){
        if(a[i-1]>a[i]){
            count++;
        }
    }
    if(a[size-1]>a[0]){
        count++;
    }
    if(count<=1){
        cout<<"Array is sorted and rotated.";
    }else{
        cout<<"Array is not sorted and rotated.";
    }
}

int main(){
    int a[5] = {4,5,6,1,2};
    checkSortedRotated(a,5);
}