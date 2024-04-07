/*
Given an integer array of size N and integer S.
Find the list of all triplets of elements such that each sum of elements of each triplet is equals S
*/

#include <iostream>
using namespace std;

void pairSum(int a[], int s, int size){
    for(int i=0; i<size; i++){
        for(int j=i; j<size; j++){
            for(int k=j; k<size; k++){
                if((a[i] + a[j] + a[k]) == s){
                    cout<<"["<<a[i]<<", "<<a[j]<<", "<<a[k]<<"]"<<endl;
                }
            }
        }
    }
    cout<<"Code executed";
}

int main(){
    int a[5] = {1,2,3,4,5};
    int s = 12;
    pairSum(a,s,5);
    return 0;
}