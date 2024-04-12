/*
Given a string str of lowercase alphabets. The task is to find the maximum occurring character in the string str. 
If more than one character occurs the maximum number of time then print the lexicographically smaller character.

Example
Input:
str = testsample
Output: e
Explanation: e is the character which
is having the highest frequency.
*/

#include <iostream>
using namespace std;

char maxOccurence(string s){
    int a[26] = {0}; 
    int number =0;
    for(int i=0; i<s.length(); i++){
        if(s[i]>='a' && s[i]<='z'){
            number = s[i] - 'a';
        }else{
            number = s[i] - 'A';
        }
        a[number]++;
    }

    int maxi = 0;
    char ch;
    for(int i=0; i<26; i++){
        if(a[i]>maxi){
            maxi = a[i];
            ch = i + 'a'; 
        }
    }
    cout<<"Maximum occurring character is: "<<ch;
}

int main(){
    string s = "testSample";
    maxOccurence(s);
}