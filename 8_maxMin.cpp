#include <iostream>
using namespace std;

int getMin(int arr[], int size){
    int mini = INT32_MAX;
    for(int i=0;i<size;i++){
        mini = min(arr[i], mini);
        // if(arr[i]<mini){
        //     mini = arr[i];
        // }
    }
    return mini;
}
int getMax(int arr[], int size){
    int maxi = INT32_MIN;
    for(int i=0;i<size;i++){
        maxi = max(arr[i],maxi);
        // if(arr[i]>maxi){
        //     maxi = arr[i];
        // }
    }
    return maxi;
}

int main(){
    int a;
    cout<<"Enter number of items you want in array: ";
    cin>>a;

    int num[100];
    for(int i=0;i<a;i++){
        cout<<"Enter element number "<<i+1<<": ";
        cin>>num[i];
    }

    int min = getMin(num, a);
    int max = getMax(num, a);

    cout<<"Max: "<<max;
    cout<<endl<<"Min: "<<min;
}