#include <iostream>
using namespace std;

void moveZeroes(int a[], int size){
    for(int i=0; i<size; i++){
        if(a[i]==0){
            for(int j=i+1; j<size; j++){
                if(a[j]!=0){
                    swap(a[i], a[j]);
                    break;
                }
            }
        }
    }
    cout<<"Move zeroes: ";
    for(int i=0; i<size; i++){
        cout<<a[i]<<" ";
    }
}

int main(){
    int a[7] = {0,1,3,0,4,0,0};
    moveZeroes(a,7);
    return 0;
}