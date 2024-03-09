/*
output: 
            _ _ _ _ *
            _ _ _ * *
            _ _ * * *
            _ * * * *
            * * * * *
*/

#include <iostream>
using namespace std;

int main(){
    int a ;
    cout<<"Enter number of rows: ";
    cin>>a;
    
    int i = 0;
    while(i<a){
        int j = 0;
        int k = 0;
        while(j<(a-(i))){
            cout<<" ";     //we have used single space for this. Just by changing it to double space the whole pattern changes (in starPattern-3)
            j++;
        }
        while(k<=i){
            cout<<"*";
            k++;
        }
        cout<<endl;
        i++;
    }
}