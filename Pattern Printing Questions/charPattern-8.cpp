/*
output: 
            D
            C D
            B C D
            A B C D
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
        char result = ('A'+(a-1))-i;
        while(j<=i){
            cout<<result<<" ";
            result++;
            j++;
        }
        cout<<endl;
        i++;
    }
}