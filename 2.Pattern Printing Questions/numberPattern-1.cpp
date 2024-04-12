/*
output: 
            1 2 3
            4 5 6
            7 8 9
*/

#include<iostream>
using namespace std;

int main(){
    int a ;
    cout<<"Enter number of rows: ";
    cin>>a;
    int count = 1;
    int i = 0;
    while(i<a){
        int j = 1;
        while(j<=a){
            cout<<count<<" ";
            count++;
            j++;
        }
        cout<<endl;
        i++;
    }
}