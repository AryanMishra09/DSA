#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
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
    rotate(v.begin(), v.begin()+2, v.end());
    cout<<"Vector after rotate: ";
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"Vector after sort: ";
    sort(v.begin(), v.end());  //it is based on intro sort which is combination of quick sort, heap sort and insertion sort.
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;


}
