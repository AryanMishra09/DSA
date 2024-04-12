/*
ex = ['l', 'o', 'v', 'e', ' ', 'g', 'o', 'd']
output: ['e', 'v', 'o', 'l', ' ', 'd', 'o', 'g']

*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string reverseString(string s){
    string v;
    int count =0;
    for(int i=0; i<s.length(); i++){
        if(s[i]!=' '){
            v.push_back(s[i]);
        }
        if(s[i]==' '){
            int st = count;
            int e = i-1;
            while(st<=e){
                swap(v[st], v[e]);
                st++;
                e--;
            }
            v.push_back(' ');
            count = i+1;
        }
        if(i==s.length()-1){
            int st = count;
            int e = i;
            while(st<=e){
                swap(v[st], v[e]);
                st++;
                e--;
            }
            v.push_back(' ');
            count = i+1;
        }
    }
    return v;
}

int main(){
    string s = "love god";
    string ans= reverseString(s);
    cout<<"Reversed String: "<<ans;
}