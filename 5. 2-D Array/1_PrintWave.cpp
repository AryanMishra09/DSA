/*
Problem statement
For a given two-dimensional integer array/list ‘ARR’ of size (N x M), 
print the ‘ARR’ in a sine wave order, i.e., print the first column top to bottom, 
next column bottom to top, and so on.

For eg:-

The sine wave for the matrix:-
1 2
3 4
will be [1, 3, 4, 2].
*/


#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void printWave(int a[][2], int n, int m){
    bool count = true;
    vector<int> v;
    for(int i=0; i<m; i++){
        if(count){
            for(int j=0; j<n; j++){
                v.push_back(a[j][i]);
                count = false;
            }
        }else{
            for(int j=n-1; j>=0; j--){
                v.push_back(a[j][i]);
                count = true;
            }
        }
    }
    for(int i:v){
        cout<<i<<" ";
    }
}

int main(){
    int a[2][2] = {{1,2},{3,4}};
    printWave(a, 2,2);
}