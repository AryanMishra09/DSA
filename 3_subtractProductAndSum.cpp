#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    int lastdigit=0;
    int product = 1;
    int sum = 0;

    while(n>0){
        lastdigit = n%10;
        product =  product*lastdigit;
        sum = sum + lastdigit;
        n = n/10;
    }

    int subtract = product - sum ;
    cout<<subtract;
}