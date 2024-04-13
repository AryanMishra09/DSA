/*
                        Search a 2D Matrix  (BINARY SEARCH):
You are given an m x n integer matrix matrix with the following two properties:

Each row is sorted in non-decreasing order.
The first integer of each row is greater than the last integer of the previous row.
Given an integer target, return true if target is in matrix or false otherwise.

You must write a solution in O(log(m * n)) time complexity.

Example 1:
Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 3
Output: true
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int binarySearch(int a[][4], int n, int m, int target){
    int s=0;
    int e=n*m-1;
    int mid = s + (e-s)/2;
    while(s<=e){
        int element = a[mid/m][mid%m];
        if(element==target){
            return 1;
        }
        else if(element > target){
            e = mid-1;
        }else{
            s = mid+1;
        }
        mid = s + (e-s)/2;
    }
    return 0;
}

int main(){
    int a[3][4] = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    int target = 3;
    int ans = binarySearch(a,3,4, target);
    cout<<"Element Present or not: "<<ans;
}