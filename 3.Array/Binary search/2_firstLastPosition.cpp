/*
Given an sorted array consisting of N elements and integer K.
Find the first and last occurrence of K in array.
ex: input: [0,1,1,1,2], k=1
    output: 1 3
*/

#include <iostream>
using namespace std;

//my approach
void firstLastPosition(int a[], int size, int k){
    int i = 0, j = size-1, mid = 0;
    int left = 0, right = 0;
    while(i<=j){
        mid = i + (j-i)/2;
        if(a[mid]==k){
            left = mid;
            right = mid;
            break;
        }else if(k>a[mid]){
            i=mid+1;
        }else{
            j=mid-1;
        }
    }
    //for left index
    while(a[left]==k){
        left = left-1;
    }
    //for right index
    while(a[right]==k){
        right = right+1;
    }
    cout<<"Left position : "<<left+1<<endl;
    cout<<"Right position: "<<right-1<<endl;
}

//video solution approacch: (make two seperate function for left and right occurance):
void firstOcc(int a[], int size, int k){
    int i=0, j=(size-1);
    int mid = 0, ans=-1;
    while(i<=j){
        mid = i + (j-i)/2;   //for handling integer overflow; when i=int_max & j=int_max then i+j= greater than integer limit, thats why formula is written in this form.
        if(a[mid] == k){
            ans = mid;
            j=mid-1;
        }
        else if(a[mid]>k){
            j=mid-1;
        }
        else if(a[mid]<k){
            i=mid+1;
        }
    }
    cout<<"Left Postion: "<<ans<<endl;
}
void lastOcc(int a[], int size, int k){
    int i=0, j=(size-1);
    int mid = 0, ans=-1;
    while(i<=j){
        mid = i + (j-i)/2;   //for handling integer overflow; when i=int_max & j=int_max then i+j= greater than integer limit, thats why formula is written in this form.
        if(a[mid] == k){
            ans = mid;
            i=mid+1;
        }
        else if(a[mid]>k){
            j=mid-1;
        }
        else if(a[mid]<k){
            i=mid+1;
        }
    }
    cout<<"Right Postion: "<<ans<<endl;   
}

int main(){
    int a[9] = {0,1,1,1,2,9,9,10,12};
    int k = 1;
    firstLastPosition(a,9,k);
    cout<<"Method 2: "<<endl;
    firstOcc(a,9,k);
    lastOcc(a,9,k);
}