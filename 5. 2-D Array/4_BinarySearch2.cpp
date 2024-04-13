/*
                                        Search a 2D Matrix II
Write an efficient algorithm that searches for a value target in an m x n integer matrix matrix. 
This matrix has the following properties:

Integers in each row are sorted in ascending from left to right.
Integers in each column are sorted in ascending from top to bottom.
 
Example 1:
Input: matrix = [[1,4,7,11,15],[2,5,8,12,19],[3,6,9,16,22],[10,13,14,17,24],[18,21,23,26,30]], target = 5
Output: true
link: https://leetcode.com/problems/search-a-2d-matrix-ii/description/
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int searchMatrix(int a[][5], int row, int col, int target){
    int rowIndex = 0;
    int colIndex = col-1;
    while(rowIndex<row && colIndex>=0){
        int element = a[rowIndex][colIndex];
        if(element == target) {
            return 1;
        }if(element > target) {
            colIndex--;
        }else {
            rowIndex++;
        }
    }  
    return 0;
}

int main(){
    int a[5][5] = {{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,24},{18,21,23,26,30}};
    int target = 5;
    int ans = searchMatrix(a,5,5,target);
    cout<<"Element present or not: "<<ans;
}