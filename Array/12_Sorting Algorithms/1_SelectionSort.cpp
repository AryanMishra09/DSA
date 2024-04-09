#include <iostream>
using namespace std;

void selectionSort(int a[], int size){
    for(int i=0;i<size-1;i++){
        int minIndex = i;
        for(int j=i+1; j<size; j++){
            if(a[minIndex] > a[j]){
                minIndex = j;
            }
        }
        swap(a[i], a[minIndex]);
    }
    for(int i=0; i<size; i++){
        cout<<a[i]<<" ";
    }
}

int main(){
    int a[5] = {64,25,12,22,11};
    selectionSort(a,5);
}