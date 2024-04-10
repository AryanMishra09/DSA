#include <iostream>
using namespace std;

void insertionSort(int a[], int size){
    for(int i=1; i<size; i++){
        int index=0;
        int temp = a[i];
        for(int j=i-1; j>=0; j--){
            index=j;
            if(temp < a[j]){
                a[j+1] = a[j];
            }else{
                break;
            }
        }
        a[index+1] = temp;
    }

    for(int i=0; i<size; i++){
        cout<<a[i]<<" ";
    }
}

int main(){
    int a[7] = {10,1,7,4,8,2,11};
    insertionSort(a,7);
}