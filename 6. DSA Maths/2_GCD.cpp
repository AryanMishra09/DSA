/*
Find the gcd or hcf of a number using Euclid Algirithm
Method 1: Iterative method
*/

#include <iostream>
using namespace std;

int gcd(int a, int b){
    if(a==0){
        return b;
    }
    if(b==0){
        return a;
    }
    while(a!=b){
        if(a>b){
            a = a-b;
        }
        else{
            b = b-a;
        }
    }
    return a;
}

int main(){
    int a = 72;
    int b = 24;
    int ans = gcd(a,b);
    cout<<"GCD: "<<ans;
}