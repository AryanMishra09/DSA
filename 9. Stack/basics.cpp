#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {

    //creation of stack:
    stack<int> s;

    //push:
    s.push(2);
    s.push(3);
    
    //pop:
    s.pop();

    cout<<"Printing top element : "<<s.top()<<endl;
    cout<<"is stack empty: "<<s.empty()<<endl;
}