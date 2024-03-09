/*
output: 
            A A A
            B B B
            C C C
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
        }
        cout<<endl;
        i++;
        c++;
    }
}