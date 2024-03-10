#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;

    int i = 0;
    float sum = 0;
    while(n!=0){
        int bit = n % 10;
        n=n/10;
        if(bit==1){
            sum = sum + pow(2,i);
        }
        i++;
    }
    cout<<sum;
}