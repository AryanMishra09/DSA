/*
output: 
            A B C
            B C D
            C D E
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
        char result = 'A'+i;
        while(j<a){
            cout<<result<<" ";
            result++;
            j++;
        }
        cout<<endl;
        i++;
    }
}