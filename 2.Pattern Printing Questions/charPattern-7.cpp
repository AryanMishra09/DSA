/*
output: 
            A 
            B C
            C D E
            D E F G
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
            char result = 'A'+i+j;
            cout<<result<<" ";
            result++;
            j++;
        }
        cout<<endl;
        i++;
    }
}