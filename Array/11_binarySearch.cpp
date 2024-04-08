#include <iostream>
using namespace std;

int binarySearch(int a[], int size, int key){
    int i=0, j=(size-1);
    int mid = 0;
    while(i<=j){
        mid = i + (j-i)/2;
        if(a[mid] == key){
            return mid;
        }
        else if(a[mid]>key){
            j=mid-1;
        }
        else if(a[mid]<key){
            i=mid+1;
        }
    }
    return -1;
}

int main(){
    int even[6] = {2,8,56,98,106,222};
    int odd[5] = {7,9,63,75,89};

    int index1 = binarySearch(even, 6, 107);
    if(index1==-1){
        cout<<"Element not found"<<endl;
    }else{
        cout<<"Element found at index: "<<(index1)<<endl;
    }
    int index2 = binarySearch(odd, 5, 106);
    if(index2==-1){
        cout<<"Element not found"<<endl;
    }else{
        cout<<"Element found at index: "<<(index2)<<endl;
    }

}