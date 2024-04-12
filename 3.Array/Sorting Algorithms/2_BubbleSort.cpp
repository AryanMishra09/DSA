#include <iostream>
using namespace std;

void bubbleSort(int a[], int size){
    for(int i=0; i<size-1; i++){
        bool swapped = false;
        for(int j=0; j<size-i-1; j++){
            if(a[j]>a[j+1]){
                swap(a[j], a[j+1]);
                swapped = true;
            }
        }
        if(swapped==false){
            break;
        }
    }
    for(int i=0; i<size; i++){
        cout<<a[i]<<" ";
    }
}

int main(){
    int a[6] = {10,1,7,6,14,9};
    bubbleSort(a,6);
}