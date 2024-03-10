//Write a function that takes an unsignes integer and returns the number of '1' bits it has(also called Hamming Weight):

#include <iostream>
using namespace std;

int main(){
    unsigned int a;
    cout<<"Enter number: ";
    cin>>a;
    int count = 0;
    while(a!=0){
        if(a&1){
            count++;
        }
        a = a>>1;
    }
    cout<<count;
}