/*
IMplement linear Search Using Recursion:
*/

#include <iostream>
using namespace std;

bool search(int arr[], int size, int key){
    if(size==0){
        return false;
    }
    else if(arr[0]==key){
        return true;
    }else{
        return search(arr+1, size-1, key);
    }
}

int main(){
    int arr[5] = {2,4,5,6,2};
    int key = 6;
    bool a = search(arr,5,key);
    cout<<a;
}