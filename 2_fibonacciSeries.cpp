#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"Enter First number: "<<endl;
    cin>>a;
    cout<<"Enter Second number: "<<endl;
    cin>>b;
    cout<<"Enter number of terms you want: "<<endl;
    cin>>c;
    int sum = 0;
    for(int i=0; i<c;i++){
        cout<<a<<" ";
        sum = a+b;
        a=b;
        b=sum;
    }
}


// 0 1 1 2 3 5 8 13 .............