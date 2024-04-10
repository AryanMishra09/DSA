/*
Rotates the order of the elements in the range [first,last), 
in such a way that the element pointed by middle becomes the new first element.
ex = [4,5,6,7,8] ,   k=2;
o/p -> [6,7,8,4,5]
same the rotate(v.begin(), v.begin()+2, v.end()) stl algorithm do.
*/

#include <iostream>
using namespace std;

void rotateArray(int a[], int size, int k){
    int ar[size];
    for(int i=0; i<size; i++){
        int index = (i+k)%size;
        ar[index] = a[i];
    }

    cout<<"Array after rotation: ";
    for(int i=0; i<size; i++){
        cout<<ar[i]<<" ";
    }
}

int main(){
    int a[7] = {4,5,9,10,78,100,200};
    int rotateIndex = 3;      //equvalent to using the rotate function as rotate(v.begin(), v.begin()+4, v.end()) //element pointing to the 4th index will become the first element of the resultant array
    rotateArray(a, 7,rotateIndex);
}