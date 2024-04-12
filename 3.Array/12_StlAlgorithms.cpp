#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);
    cout<<"Finding 6 is present or not by binary search: "<<binary_search(v.begin(), v.end(), 6)<<endl;
    cout<<"Lower bound: "<<lower_bound(v.begin(), v.end(), 6)-v.begin()<<endl;
    cout<<"Lower bound: "<<upper_bound(v.begin(), v.end(), 4)-v.begin()<<endl;

    int a = 3;
    int b = 5;
    cout<<"max of 3 and 5"<<max(3,5)<<endl;
    cout<<"min of 3 and 5"<<min(3,5)<<endl;
    swap(a,b);

    string s = "aryan";
    cout<<"String: "<<s<<endl;
    reverse(s.begin(), s.end());
    cout<<"Reverse String: "<<s<<endl;

    cout<<"Vector before rotate: ";
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;
    rotate(v.begin(), v.begin()+3, v.end());   //equvalent to shifting the array right by 2 steps. 
    cout<<"Vector after rotate: ";             //the index at which v.begin()+4 is pointing will become the first element of the resultant array
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"Vector after sort: ";
    sort(v.begin(), v.end());  //it is based on intro sort which is combination of quick sort, heap sort and insertion sort.
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    vector<int> v2(5,5);
    cout<<"Vector 2: ";
    for(int i:v2){
        cout<<i<<" ";
    }cout<<endl;
    vector<int> v3(9);
    merge(v.begin(), v.end(), v2.begin(), v2.end(), v3.begin());   //merge hamesha sorted array me hi lagta 
    cout<<"Merged sorted array: ";
    for(int i:v3){
        cout<<i<<" ";
    }cout<<endl;
    
}
