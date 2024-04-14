/*
                                Modular Exponentiation (Fast Exponentation)
You are given a three integers 'X', 'N', and 'M'. Your task is to find ('X' ^ 'N') % 'M'. A ^ B is 
defined as A raised to power B and A % C is the remainder when A is divided by C.

Constraints :
1 <= T <= 100   
1 <= X, N, M <= 10^9

Sample Input 1 :
2 
3 1 2
4 3 10
Sample Output 1 :
1
4
Explanation for Sample Output 1:
    In test case 1, 
    X = 3, N = 1, and M = 2 
    X ^ N = 3 ^ 1 = 3 
    X ^ N % M = 3 % 2 = 1. 
    So the answer will be 1.

    In test case 2,
    X = 4, N = 3, and M = 10 
    X ^ N = 4 ^ 3 = 64 
    X ^ N % M = 64 % 10 = 4. 
    So the answer will be 4.
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int expo(int x, int n, int m){
    int res = 1;

    while(n>0){

        if(n&1){ 
            //if n is odd
            res = (1LL * (res) * (x)%m)%m;              //1LL is multipied for typecasting int to long integer.
        }

        x = (1LL * (x)%m * (x)%m)%m;            
        n = n>>1;          //equivalent to n/2

    }
    return res;
}

int main(){
    int x = 4;
    int n = 3;
    int m = 10;
    //find (x^n)%m
    int ans = expo(x, n, m);
    cout<<"Ans: "<<ans;
}