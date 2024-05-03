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
    if(m==1){
        return n;
    }
    int ans = calPower(n, m/2);
    if(n)
}


//highly optimized code:
double myPow(double x, long long n) {
        //base case:
        if(n==0){
            return 1;
        }
        if(n==1){
            return x;
        }
        // Handling negative exponent
        if (n < 0) {
            x = 1 / x;
            n = -n;
        }
        //recursive call:
        double ans = myPow(x, n/2);
        if(n&1){
            return x * (ans * ans);
        }else{
            return ans * ans;
        }
}

int main(){
    int n = 2;
    int m = 2;
    int a = calPower(n,m);
    cout<<a;
}