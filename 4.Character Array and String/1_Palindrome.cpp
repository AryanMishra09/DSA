/*
A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

Given a string s, return true if it is a palindrome, or false otherwise.

 

Example 1:

Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" is a palindrome.*/


#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool validOrNot(char a){
    if((a>='A' && a<'Z') || (a>='a' && a<='z') || (a>='0' && a<='9') ){
        return true;
    }
    return false;
}

char toLowercase(char a){
    if(a>='A' && a<='Z'){
        char temp = (a-'A') + 'a';
        return temp;
    }
    return a;
}

bool palindrome(char a[], int n){
    string temp = "";
        
    for(int j=0; j<n; j++) {   
        if(validOrNot(a[j])) {
            temp.push_back(a[j]);
        }
    }

    //lowercase me kardo
    for(int j=0; j<temp.length(); j++) { 
        temp[j] = toLowercase(temp[j]);
    }

    int s = 0;
    int e = temp.length()-1;

    while(s<=e) {
        if(temp[s] != temp[e])
        {
            return 0;       
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
        
}

int main(){
    char a[30];
    cout<<"Enter name: ";
    cin>>a;
    cout<<"You name is: "<<a<<endl;
    int n=0;
    for(int i=0; a[i]!='\0'; i++){
        n++;
    }
    bool ans = palindrome(a,n);

    cout<<"Palindrome: "<<ans;
}