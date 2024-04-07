/*
You aregiven two arrays A and B of size N and M respectively.
Both arrays are sorted in non-decreasing order. 
you have to find intersection of these two arrays.

ex: input:  A : [1,2,3,3]
            B : [3,4]
    output: [3]
*/

#include <iostream>
using namespace std;

void findIntersection(int a[], int b[], int sizea, int sizeb){
    for(int i=0; i<sizea; i++){
        for(int j=0; j<sizeb; j++){
            if(a[i]==b[j]){
                cout<<a[i]<<" ";
                b[j] = INT32_MIN;
                break;
            }
        }
    }
}

int main(){
    int a[5] = {5,8,6,2,2};
    int b[3] = {5,2,9};
    findIntersection(a,b,5,3);
    return 0;
}