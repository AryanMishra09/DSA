/*
given an array which is mountain, return i such that it is the index of peak element of array
example: input: [0,1,2,15,7,4,3] 
         output: 3    (as a[3] = 15)
*/

#include <iostream>
using namespace std;

int peakElement(int a[], int size){
    int i=0, j=size-1, mid=-1;
    while(i<j){
        mid = i + (j-i)/2;
        if(a[mid+1]>a[mid]){
            i = mid+1;
        }else{
            j = mid;
        }
    }
    return j;
}

int main(){
    int a[7] = {0,1,2,15,7,4,3};
    int index = peakElement(a,7);
    cout<<"Peak element is: "<<a[index];

}