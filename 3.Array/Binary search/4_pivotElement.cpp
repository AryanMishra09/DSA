/*
Given an array in sorted order. It is rotated from a fixed element.
Find the PIVOT ELEMENT.
ex-     array - [1,2,3,7,9]
        rotated - [7,9,1,2,3]
        output - 1

        PIVOT ELEMENT is the minimum element in the array. Graph banake samjho. logic in copy.
*/

#include <iostream>
using namespace std;

int pivotElement(int a[], int size){
    int i=0, j=size-1, mid=0;
    while(i<j){
        mid=i+(j-i)/2;
        if(a[mid]>=a[0]){
            i = mid+1;
        }else{
            j=mid;
        }
    }
    return i;
}

int main(){
    int a[5] = {8,10,17,1,3};
    int index = pivotElement(a,5);
    cout<<"Pivot element: "<<a[index];
}