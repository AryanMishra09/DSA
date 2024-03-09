/*
output: 
            A 
            B C
            D E F
            G H I J
*/

#include <iostream>
using namespace std;

int main(){
    int a ;
    cout<<"Enter number of rows: ";
    cin>>a;
    char result = 'A';
    int i = 0;
    while(i<a){
        int j=0;
        while(j<=i){
            cout<<result<<" ";
            result++;
            j++;
        }
        cout<<endl;
        i++;
    }
}