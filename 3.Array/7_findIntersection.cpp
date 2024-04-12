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

/*
//bruteforce method
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
*/

//optimized method using the point that array is sorted in non-decreasing order:
void optimized(int arr[], int brr[], int sizea, int sizeb){
    int i = 0, j = 0;
    while(i<sizea && j<sizeb){
        if(arr[i]==brr[j]){
            if(i == 0 || arr[i] != arr[i - 1]){  // Check if the current element is not a duplicate
                cout << arr[i] << " ";
            }
            i++;
            j++;
        } else if(arr[i]<brr[j]){
            i++;
        } else{
            j++;
        }
    }
}


int main(){
    int a[6] = {1,2,2,2,3,4};
    int b[4] = {2,2,3,3};
    // cout<<"Find intersection : ";
    // findIntersection(a,b,6,4);
    // cout<<endl;
    cout<<"Find intersection (optimized): ";
    optimized(a,b,6,4);
    return 0;
}