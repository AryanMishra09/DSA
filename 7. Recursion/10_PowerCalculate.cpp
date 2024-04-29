/*
calculate the n^m using recursion:
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int calPower(int n, int m){
    //base case:
    if(m==0){
        return 1;
    }
    ///recursive call:
    return n * calPower(n,m-1);
}

int main(){
    int n = 2;
    int m = 2;
    int a = calPower(n,m);
    cout<<a;
}