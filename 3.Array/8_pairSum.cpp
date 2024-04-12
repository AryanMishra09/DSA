/*
Given an integer array of size N and integer S.
Find the list of all pairs of elements such that each sum of elements of each pair is equals S
*/

#include <iostream>
using namespace std;

void pairSum(int a[], int s, int size){
    for(int i=0; i<size; i++){
        for(int j=i; j<size; j++){
            if(a[i]+a[j]==s){
                cout<<"["<<a[i]<<", "<<a[j]<<"]"<<endl;
            }
        }
    }
    cout<<"Code executed";
}

int main(){
    int a[5] = {1,2,3,4,5};
    int s = 5;
    pairSum(a,s,5);
}