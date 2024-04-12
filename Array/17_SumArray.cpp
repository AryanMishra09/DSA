/*
Problem statement

You are given two numbers 'A' and 'B' in the form of two arrays (A[] and B[]) of lengths 'N' and 'M' respectively, 
where each array element represents a digit. You need to find the sum of these two numbers and return this sum in the form of an array.

Note:

1. The length of each array is greater than zero.

2. The first index of each array is the most significant digit of the number. For example, if the array A[] = {4, 5, 1}, 
   then the integer represented by this array is 451 and array B[] = {3, 4, 5} so the sum will be 451 + 345 = 796. So you need to return {7, 9, 6}.

3. Both numbers do not have any leading zeros in them. And subsequently, the sum should not contain any leading zeros.
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void addArrays(int a[], int n, int b[], int m){
    int i=n-1, j=m-1, sum=0, carry=0, num=0;
    vector<int> v;
    while(i>=0 && j>=0){
        sum = a[i] + b[j] + carry;
        num = sum%10;
        v.push_back(num);
        carry = sum/10;
        i--;
        j--;  
    }
    while(i>=0){
        sum = a[i] + carry;
        num = sum%10;
        v.push_back(num);
        carry = sum/10;
        i--;
    }
    while(j>=0){
        sum = b[j] + carry;
        num = sum%10;
        v.push_back(num);
        carry = sum/10;
        j--;
    }
    while(carry!=0){
        sum = carry;
        num = sum%10;
        v.push_back(num);
        carry = sum/10;
    }
    reverse(v.begin(), v.end());
    cout<<"Sum: ";
    for(auto i:v){
        cout<<i<<" ";
    }
}

int main(){
    int a[3] = {9,2,3};
    int b[3] = {9,5,6}; 
    cout<<"Arrya 1: ";
    for(int i:a){
        cout<<i<<" ";
    }cout<<endl;
    cout<<"Arrya 2: ";
    for(int i:b){
        cout<<i<<" ";
    }cout<<endl;
    addArrays(a,3,b,3);
}