#include <iostream>
#include <math.h>
using namespace std;

//method 1
int main(){
    int n;
    cout<<"Enter digit: ";
    cin>>n;
    float sum =0;
    int i = 0;
    while(n!=0){
        int bit = n&1;
        cout<<bit;
        sum =(bit * pow(10, i)) + sum;
        n = n>>1;
        i++;
    }
    cout<<endl<<"Binary repersentation: "<<sum;
}

/*
//method 2

int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    float sum =0;
    int i=0;
    while(n>0){
        int bit = n%2;
        n=n/2;
        sum = sum + bit * pow(10,i);
        i++;
    }
    cout<<sum;
}
*/