/*
Given an array of length N, where each element denotes position of a Stall.
Now you have N stall and K represent no. of cows that are aggressive.
To prevent cows from hurting each other, assign cows to stalls, such that
the min. distance b/w any two of them is as large aas possible.
Return largest min. distance.
*/

#include <iostream>
using namespace std;

int maxDistanceCows(int a[], int size, int k){
    int ans = -1;
    for(int i=0; i<size-1; i++){
        for(int j=i+1; j<size; j++){
            int temp = a[i] - a[j];
            if(temp<0){
                temp =-(temp);
            }
            if(temp>ans){
                ans = temp;
            }
        }
    }
    return ans;
}

int main(){
    int a[5] = {4,2,1,3,6};
    int k = 2;
    int ans = maxDistanceCows(a,5,k);
    cout<<"Largest Minimum distance: "<<ans;
}