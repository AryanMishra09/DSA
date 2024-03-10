#include<iostream>
using namespace std;

int main() {
    int a ;
    cout<<"please enter number: ";
    cin>>a;

    int i = 2;
    while(i<a){
        if(a%i == 0){
            cout<<"It is not a prime number.";
            return 0;
        }
        i++;
    }
    cout<<"It is prime number"<<endl;
    
    return 0;
}