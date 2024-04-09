/*
Given an array of integer numbers, where arr[i] represent number of pages in the i'th book.
There ar M number of students and the task is to allocate all books to their students.
Rules:
1) Each student get atleat one book.
2) Each book should be allocated to a student.
3) Book allocation should be in contiguous manner.
Allocate book to M students such that maximaum number of pages assigned to a student is minimum.
video solution link : https://www.youtube.com/watch?v=YTTdLgyqOLY&ab_channel=CodeHelp-byBabbar
*/

#include <iostream>
using namespace std;

bool isPossibleSol(int a[], int size, int m, int mid){
    int pageSum=0;
    int studentCount = 1;
    for(int i=0; i<size; i++){
        if(pageSum+a[i] <= mid){
            pageSum = pageSum + a[i];
        }else{
            studentCount++;
            if(studentCount>m || a[i]>mid){
                return false;
            }
            pageSum = a[i];
        }
    }
    return true;
}

int allocateBooks(int a[], int size, int m){
    int sum=0;
    for(int i=0;i<size;i++){
        sum = sum+a[i];
    }
    int i=0, j=sum, mid=0, ans = -1;
    while(i<=j){
        mid=i+(j-i)/2;
        if(isPossibleSol(a, size, m, mid)){
            ans = mid;
            j=mid-1;
        }else{
            i=mid+1;
        }
    }
    return ans;
}

int main(){
    int a[4] = {10,20,30,40};
    int m = 2;
    int ans = allocateBooks(a,4,m);
    cout<<"Possible solution is: "<<ans;
}