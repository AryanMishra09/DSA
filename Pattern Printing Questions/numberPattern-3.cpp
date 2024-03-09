/*
output: 
            1
            2 2
            3 3 3
            4 4 4 4
*/

#include<iostream>
using namespace std;

int main(){
    int a ;
    cout<<"Enter number of rows: ";
    cin>>a;

    int i = 0;
    while(i<a){
        int j = 0;
        while(j<=i){
            cout<<i+1<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
}