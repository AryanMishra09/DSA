/*
                                        Sieve of eratosthenes
Given an integer n, return the number of prime numbers that are strictly less than n.

Example 1:
Input: n = 10
Output: 4
Explanation: There are 4 prime numbers less than 10, they are 2, 3, 5, 7.
LINK: https://leetcode.com/problems/count-primes/description/
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void countPrime(int n){
    int count = 0;
    vector<bool> v(n+1, true);
    v[0] = v[1] = false;

    for(int i=2; i<n; i++){
        //checking if number is prime or not: 
        if(v[i]){
            count++;
            cout<<i<<", ";

            //iss number ke table me jitne bhi number aate h wo sab non-prime hoge tho usko non-prime(false) mark kr do;
            for(int j=2*i; j<n; j=j+i){
                v[j] = false;
            }
        }
    }
    cout<<endl<<"Total number of prime numbers: "<<count<<endl;
}

int main(){
    int n=40;
    countPrime(40);
}