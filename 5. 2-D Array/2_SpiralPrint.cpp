/*
Given an m x n matrix, return all elements of the matrix in spiral order.

Example 1:
Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
Output: [1,2,3,6,9,8,7,4,5]
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void spiralPrint(int a[][3], int n, int m){
    int total = n*m;
    int count = 0;

    //initializes the index:
    int startrow = 0;
    int endrow = n-1;
    int startcol = 0;
    int endcol = m-1;

    while(count<total){
        //print start row:
        for(int i=startcol; (count<total && i<=endcol); i++){
            cout<<a[startrow][i]<<" ";
            count++;
        }
        startrow++;

        //print last Col: 
        for(int i=startrow; (count<total && i<=endrow); i++){
            cout<<a[i][endcol]<<" ";
            count++;
        }
        endcol--;

        // print last row:
        for(int i=endcol; (count<total && i>=startcol); i--){
            cout<<a[endrow][i]<<" ";
            count++;
        }
        endrow--;

        //print first col:
        for(int i=endrow; (count<total && i>=startrow); i--){
            cout<<a[i][startcol]<<" ";
            count++;
        }
        startcol++;
    }

}

int main(){
    int a[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    spiralPrint(a,3,3);
}