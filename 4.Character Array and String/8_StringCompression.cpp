/*
Given an array of characters chars, compress it using the following algorithm:

Begin with an empty string s. For each group of consecutive repeating characters in chars:

If the group's length is 1, append the character to s.
Otherwise, append the character followed by the group's length.
The compressed string s should not be returned separately, but instead, be stored in the 
input character array chars. Note that group lengths that are 10 or longer will be split into 
multiple characters in chars.

After you are done modifying the input array, return the new length of the array.

You must write an algorithm that uses only constant extra space.

Example 1:

Input: chars = ["a","a","b","b","c","c","c"]
Output: Return 6, and the first 6 characters of the input array should be: ["a","2","b","2","c","3"]
Explanation: The groups are "aa", "bb", and "ccc". This compresses to "a2b2c3".
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//my approach
void countlength(char a[], int size){
    int index = 0;
    int arr[26] = {0};
    vector<char> c;

    for(int i=0; i<size; i++){
        index = a[i] -'a';
        arr[index]++;
    }

    for(int i=0; i<26; i++){
        if(arr[i]>0){
            char ch = i + 'a';
            c.push_back(ch);
            if(arr[i]>10){
                int num = arr[i]%10;
                int first = arr[i]/10;
                char c1 = num + '0';
                char c2 = first + '0';
                c.push_back(c2);
                c.push_back(c1);
            }
            if(arr[i]<10){
                char c3 = arr[i] + '0';
                c.push_back(c3);
            }
        }
    }
    for(int i=0; i<c.size(); i++){
        cout<<c[i]<<" ";
    }
}

//optimized:
void compress(char a[], int size){
    int i=0;
    int ansIndex = 0;
    int n = size;
    while(i<n){
        int j=i+1;
        while(j<n && a[i] == a[j]){
            j++;
        }
        //yaha kab aaoge? 
        //case 1: jab array poora traverse ho gya
        //case 2: ya fir new character/different character mil gaya

        //old character store kr lo
        a[ansIndex++] = a[i]; 
        int count = j-i;
        if(count>1){
            //converting counting into single digit and saving in answer
            string cnt = to_string(count);
            for(char ch:cnt){
                a[ansIndex++] = ch;
            }
            i=j;
        }
    }
    cout<<"Size : "<<ansIndex;
}

int main(){
    char a[18] {'a','a', 'b', 'b', 'c','c','c','c','c','c','c','c','c','c','c','c','c','c'};
    countlength(a,18);
    cout<<endl;
    compress(a,18);
}