/*
output: 
            A B C
            B C D
            C D E
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
        while(j<a){
            char c = 65;  //Asci value of A = 65
            char result = (c+i)+j;
            cout<<result<<" ";
            j++;
            c++;
        }
        cout<<endl;
        i++;
    }
}