/*
                Permutation in a string:
Given two strings s1 and s2, return true if s2 contains a permutation of s1, or false otherwise.
In other words, return true if one of s1's permutations is the substring of s2.

Example 1:
Input: s1 = "ab", s2 = "eidbaooo"
Output: true
Explanation: s2 contains one permutation of s1 ("ba").

Example 2:
Input: s1 = "ab", s2 = "eidboaoo"
Output: false

LINK: https://www.youtube.com/watch?v=Wdjr6uoZ0e0&t=11s&ab_channel=CodeHelp-byBabbar     at 1:25:00
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool checkEqual(int a[26], int b[26]){
    for(int i=0; i<26; i++){
        if(a[i]!=b[i]){
            return 0; 
        }
    }
    return 1;
}

bool permutation(string s1, string s2){
    //character count array:
    int count1[26]={0};
    for(int i=0; i<s1.length(); i++){
        int index = s1[i] -'a';
        count1[index]++;
    }

    //traverse s2 string in window of size s1 length and compare:
    int i = 0;
    int windowSize = s1.length();
    int count2[26]={0};
    //running first window:
    while(i<windowSize && i<s2.length()){
        int index = s2[i] - 'a';
        count2[index]++;
        i++;
    }
    if(checkEqual(count1, count2)){
        return 1;
    }

    //aage window process karo:
    while(i<s2.length()){
        char newChar = s2[i];
        int index = newChar - 'a';
        count2[index]++;

        char oldChar = s2[i-windowSize];
        index = oldChar - 'a';
        count2[index]--;
        i++;
        if(checkEqual(count1, count2)){
            return 1;
        }
    }
    return 0;
}

int main(){
    string s1 = "ab";
    string s2 = "eidbaooo";
    bool ans = permutation(s1, s2);
    if(ans){
        cout<<"true";
    }else{
        cout<<"false";
    }
}