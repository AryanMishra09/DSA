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
    int ans = 1;
    for(int i=0; i<31; i++){
        if(n==ans){
            cout<<"true";
            return true;
        }
        if(ans<INT32_MAX/2){
            ans = ans * 2;
        }
    }
    cout<<"false";
    return false;
}