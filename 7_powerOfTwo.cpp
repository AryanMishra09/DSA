/*
Q. Given an integer n, return true if it is power of two. Otherwise return flase;
*/

#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;

    for(int i=0; i<31; i++){
        int ans = pow(2,i);
        if(n==ans){
            cout<<"true";
            return true;
        }
    }
    cout<<"false";
    return false;
}