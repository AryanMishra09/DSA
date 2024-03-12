#include <iostream>
using namespace std;

bool linearSearch(int arr[], int size, int key){
    for(int i=0; i<size; i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
}

int main(){
    int arr[10] = {10,2,8,9,6,3,7,5,-8,9};
    int k;
    cout<<"Enter key to search: ";
    cin>>k;

    bool found = linearSearch(arr, 10, k);
    if(found){
        cout<<"Element is present."<<endl;
    } 
    else{
        cout<<"Element is not present."<<endl;
    }
}