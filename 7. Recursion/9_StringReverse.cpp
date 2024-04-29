/*
Reverse the string using recursion:
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string reverse(string s, int i, int j){
    //base case
    if(i>j){
        return s;
    }
    //processing
    swap(s[i], s[j]);
    i++;
    j--;
    // recursive call 
    return reverse(s,i,j);
}

int main(){
    string s = "abcde";
    int i=0, j=s.size()-1;
    s = reverse(s,i,j);
    cout<<s;
}