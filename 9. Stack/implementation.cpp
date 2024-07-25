#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//implementation by array:
class Stack{
    public: 
        int *arr;
        int top;
        int size;

    Stack(int size){
        this->size = size;
        arr = new int[size];
        top = -1; 
    }

    void push(int element){
        if(top < size-1){
            top++;
            arr[top] = element;
        } else{
            cout<<"Stack Overflow"<<endl;
        }
    };

    void pop(){
        if(top >= 0){
            top--;
        } else{
            cout<<"Stack Underflow"<<endl;
        }
    };

    int peak(){
        if(top >= 0){
            return arr[top];
        } else{
            cout<<"Stack is empty."<<endl;
        }
    };

    bool isEmpty(){
        if(top >= 0){
            return false;
        } else{
            return true;
        }
    }
};

int main() {
    Stack s(2);

    s.push(22);
    s.push(43);
    s.push(44);
    cout<<"ELement at top: "<<s.peak()<<endl;

    cout<<"Is stack empty: "<<s.isEmpty();
}