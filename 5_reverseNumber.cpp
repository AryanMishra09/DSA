#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    int reverseNumber=0;
    while(n>0){
        int digit = n%10;
        reverseNumber = reverseNumber*10 + digit;
        n = n/10;
    }
    cout<<"Reverse Number: "<<reverseNumber;
}