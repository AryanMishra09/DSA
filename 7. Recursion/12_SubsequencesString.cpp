/*
You are given a string 'STR' containing lowercase English letters from a to z inclusive. 
Your task is to find all non-empty possible subsequences of 'STR'.

A Subsequence of a string is the one which is generated by deleting 0 or more letters 
from the string and keeping the rest of the letters in the same order.

Sample Input 1:
abc
Sample Output 1:
a ab abc ac b bc c
Explanation of sample input 1:
All possible subsequences of abc are :  
“a” , “b” , “c” , “ab” , “bc” , “ac”, “abc”

link: https://leetcode.com/problems/find-the-duplicate-number/description/
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve(string s, int index, vector<string>& ans, string output){
        //base case:
        if(index>=s.length()){
            int c = count(ans.begin(), ans.end(), output);
            string temp = output;
            reverse(temp.begin(), temp.end());
            int c2 = count(ans.begin(), ans.end(), temp);
            if(output.length()>0 && c==0){
                ans.push_back(output); 
            }
            return;
        }
        //exclude case:
        solve(s, index+1, ans, output);
        //include case:
        char a = s[index];
        output.push_back(a);
        solve(s, index+1, ans, output);
}

int distinctSubseqII(string s) {
        vector<string> ans;
        string output = "";
        int index=0;
        solve(s, index, ans, output);
        int count=0;
        cout<<"Subsequences: "<<endl;
        for(int i=0; i<ans.size(); i++){
            cout<<ans[i]<<" ";
            count++;
        }cout<<endl;

        return count;
}

int main(){
    string s = "aaa";
    int ans = distinctSubseqII(s);
    cout<<ans;
}