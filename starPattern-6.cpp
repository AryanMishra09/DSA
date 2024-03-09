/*
output: 
            1
            2 3
            4 5 6
            7 8 9 10
*/

#include<iostream>
using namespace std;

int main(){
    int a ;
    cout<<"Enter number of rows: ";
    cin>>a;

    int i = 0;
    int count = 1;
    while(i<a){
        int j = 0;
        while(j<=i){
            cout<<count<<" ";
            count++;
            j++;
        }
        cout<<endl;
        i++;
    }
}