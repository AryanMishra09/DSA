/*
You are given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise).
You have to rotate the image in-place, which means you have to modify the input 2D matrix directly. 
DO NOT allocate another 2D matrix and do the rotation.

Example 1:
Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
Output: [[7,4,1],[8,5,2],[9,6,3]]
LINK: https://leetcode.com/problems/rotate-image/description/
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//Apporach1 : transpose and reverse.
/*
1 2 3         1 4 7         7 4 1
4 5 6   =>    2 5 8   =>    8 5 2 
7 8 9         3 6 9         9 6 3
*/
void rotateArray1(int a[][3], int n){
    int row = n;

    //transposing the matrix:
    for(int i=0; i<row; i++){
        for(int j=0; j<row; j++){
            swap(a[i][j], a[j][i]);
        }
    }

    //reversing the array: 
    for(int i=0; i<row; i++){
        for(int j=0; j<row; j++){
            swap(a[i][j])
        }
    }

    for(int i=0;i<row;i++){
        for(int j=0;j<row;j++){
            cout<<a[i][j]<<' ';
        }
        cout<<endl;
    }

}

/*
 * clockwise rotate
 * first reverse up to down, then swap the symmetry 
 * 1 2 3     7 8 9     7 4 1
 * 4 5 6  => 4 5 6  => 8 5 2
 * 7 8 9     1 2 3     9 6 3
*/

int main(){
    int a[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    rotateArray1(a, 3);                             
}





