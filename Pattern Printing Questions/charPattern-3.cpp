/*
output: 
            A B C
            D E F
            G H I
*/

#include<iostream>
using namespace std;

int main(){
    int a ;
    cout<<"Enter number of rows: ";
    cin>>a;

    int i = 0;
    char c = 65;  //Asci value of A = 65
    while(i<a){
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