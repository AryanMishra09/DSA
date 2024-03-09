/*
output: 
            A B C
            A B C
            A B C
*/

#include<iostream>
using namespace std;

int main(){
    int a ;
    cout<<"Enter number of rows: ";
    cin>>a;

    int i = 0;
    while(i<a){
        char c = 65;  //Asci value of A = 65
        int j = 0;
        while(j<a){
            cout<<c<<" ";
            j++;
            c++;
        }
        cout<<endl;
        i++;
    }
}