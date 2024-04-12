#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void merge(int a1[], int n, int a2[], int m){
    int i = 0, j=0, k=0;
    int a3[n+m];

    while(i<n && j<m){
        if(a1[i]<a2[j]){
            a3[k] = a1[i];
            i++;
            k++;
        }else if(a1[i]>a2[j]){
            a3[k] = a2[j];
            j++;
            k++;
        }
    }
    while(i<n){
        a3[k] = a1[i];
        k++;
        i++;
    }
    while(j<m){
        a3[k] = a2[j];
        k++;
        j++;
    }

    cout<<"Merged array: ";
    for(int i=0; i<n+m; i++){
        cout<<a3[i]<<" ";
    }
}

int main(){
    int a1[5] = {1,3,5,7,9};
    int a2[3] = {2,4,6};
    merge(a1,5, a2,3);
    return 0;
}