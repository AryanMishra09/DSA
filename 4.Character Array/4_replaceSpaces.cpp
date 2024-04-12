/*
Problem statement:
You have been given a string 'STR' of words. You need to replace all the spaces between words with “@40”.
Sample Input 1:
2 (2 inputs)
input 1: Coding Ninjas Is A Coding Platform
input 2: Hello World
Sample Output 1:
Coding@40Ninjas@40Is@40A@40Coding@40Platform
Hello@40World
Explanation of Sample Output 1:
In test case 1, After replacing the spaces with “@40” string is: 

output 1: Coding@40Ninjas@40Is@40A@40Coding@40Platform

In test case 2, After replacing the spaces with “@40” string is: 

output 2: Hello@40World
*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void replaceSpace(string s){
    string temp = "";
    for(int i=0; i<s.length(); i++){
        if(s[i]==' '){
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }else{
            temp.push_back(s[i]);
        }
    }

    cout<<"String: "<<temp;
}

int main(){
    string s = "Coding Ninjas Is A Coding Platform";
    replaceSpace(s);
}