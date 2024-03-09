/*
output: 
            1 2 3 4
            1 2 3 4
            1 2 3 4
            1 2 3 4
*/

#include<iostream>
using namespace std;

int main(){
    int a ;
    cout<<"Enter number of rows: ";
    cin>>a;

    int i = 0;
    while(i<a){
        int j = 1;
        while(j<=a){
            cout<<j<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
}