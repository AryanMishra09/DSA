/*
output: 
            *
            * *
            * * *
            * * * *
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
            cout<<"* ";
            j++;
        }
        cout<<endl;
        i++;
    }
}