/*
output: 
              1  
            1 2 1
          1 2 3 2 1
        1 2 3 4 3 2 1
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
        int l = 0;
        while(j<(a-i)){
            cout<<"  ";
            j++;
        }
        while(k<=i){
            cout<<k+1<<" ";
            k++;
        }
        while(l<i){
            cout<<l+1<<" ";
            l++;
        }
        cout<<endl;
        i++;
    }
}