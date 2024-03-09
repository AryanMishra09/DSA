/*
output: 
            A 
            B B
            C C C
            D D D D
*/

#include <iostream>
using namespace std;

int main(){
    int a ;
    cout<<"Enter number of rows: ";
    cin>>a;

    int i = 0;
    while(i<a){
        int j=0;
        while(j<=i){
            char result = 'A'+i;
            cout<<result<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
}