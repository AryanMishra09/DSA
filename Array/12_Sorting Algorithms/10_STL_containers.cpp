#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

/*
    //array   #include <array>
    array<int,4> a = {1,2,3,4};
    cout<<"Size: "<<a.size()<<endl;
    cout<<"Element at 2nd index: "<<a.at(2)<<endl;
    cout<<"Empty or not: "<<a.empty()<<endl;
    cout<<"First element : "<<a.front()<<endl;
    cout<<"Last Element: "<<a.back()<<endl;
*/

/*
    //vector   #include <vector>
    vector<int> v;
    cout<<"Total capacity inital: "<<v.capacity()<<endl;
    
    v.push_back(2);
    v.push_back(12);
    v.push_back(20);
    v.push_back(225);
    cout<<"Capacity: "<<v.capacity()<<endl;  //kitne element ke liye space assign hua h.
    cout<<"Size: "<<v.size()<<endl;  //kitne element pade hai
    cout<<"Element at 2nd index: "<<v.at(2)<<endl;
    cout<<"First element : "<<v.front()<<endl;
    cout<<"Last Element: "<<v.back()<<endl;
    
    cout<<"Before pop:"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    v.pop_back();
    cout<<endl<<"After pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;
    cout<<"Before Clear size: "<<v.size()<<endl;
    cout<<"Before clear capacity: "<<v.capacity()<<endl;
    v.clear();
    cout<<"After Clear size: "<<v.size()<<endl;
    cout<<"After clear capacity: "<<v.capacity()<<endl;

    vector<int>a(5,1);
    cout<<"Print a: "<<endl;
    for(int i:a){
        cout<<i<<" ";
    }cout<<endl;

    vector<int>n(a);
    cout<<"Print n: "<<endl;
    for(int i:n){
        cout<<i<<" ";
    }cout<<endl;
*/

/*
   //Deque #include <deque>
   deque<int> d;
   d.push_back(2);
   d.push_front(1);
   d.push_back(5);
   d.push_front(6);
   cout<<"After push operation: "<<endl;
   for(int i:d){
        cout<<i<<" ";
    }cout<<endl;
    d.pop_back();
    d.pop_front();
    cout<<"After pop operation: "<<endl;
   for(int i:d){
        cout<<i<<" ";
    }cout<<endl;
    cout<<"Element at 1nd index: "<<d.at(1)<<endl;
    cout<<"First element : "<<d.front()<<endl;
    cout<<"Last Element: "<<d.back()<<endl;
    cout<<"Empty or not: "<<d.empty()<<endl;
    cout<<"Size before erase: "<<d.size()<<endl;
    d.erase(d.begin(), d.begin()+1);
    cout<<"Size after erase: "<<d.size()<<endl;
*/

/*
    //list #include <list>
    list<int> l;
    l.push_back(2);
    l.push_front(5);
    l.push_back(21);
    l.push_front(51);
    cout<<"List after push: "<<endl;
    for(int i:l){
        cout<<i<<" ";
    }cout<<endl;
    l.erase(l.begin());
    for(int i:l){
        cout<<i<<" ";
    }cout<<endl;
    //same pop_back and pop_front functions can be implemented
    cout<<"Size: "<<l.size()<<endl;
*/

/*
    //stack #include <stack> LIFO
    stack<string> s;
    s.push("aryan");
    s.push("narendra");
    s.push("mishra");

    cout<<"Top Element: "<<s.top()<<endl;

    s.pop();
    cout<<"Top element after pop: "<<s.top()<<endl;
    cout<<"Size: "<<s.size()<<endl;
    cout<<"Empty or not: "<<s.empty()<<endl;
*/

/*
    //queue #include <queue> FIFO
    queue<string> q;
    q.push("aryan");
    q.push("narendra");
    q.push("mishra");

    cout<<"First element: "<<q.front()<<endl;
    q.pop();
    cout<<"First element after pop: "<<q.front()<<endl;
    cout<<"Size: "<<q.size()<<endl;
*/

/*
    //priority queue #include <queue>

    //max-heap
    priority_queue<int> maxi;

    //min-heap
    priority_queue<int, vector<int>, greater<int>> mini;

    maxi.push(1);
    maxi.push(3);
    maxi.push(2);
    maxi.push(0);
    cout<<"Size of max heap: "<<maxi.size()<<endl;
    int n = maxi.size();
    for(int i=0; i<n; i++){
        cout<<"Max-heap top element: "<<maxi.top()<<endl;
        maxi.pop();
    }cout<<endl;

    mini.push(5);
    mini.push(1);
    mini.push(0);
    mini.push(4);
    mini.push(3);
    cout<<"Size of max heap: "<<mini.size()<<endl;
    int m = mini.size();
    for(int i=0; i<m; i++){
        cout<<"Max-heap top element: "<<mini.top()<<endl;
        mini.pop();
    }cout<<endl;

*/

/*
    //Set: #include <set>
    //set does not store duplicate value, agr 5 baar 1 daalsege tho wo 1 baar hi bss 1 ko store krega.
    //values can not be modified.
    set<int> s;
    s.insert(90);
    s.insert(8);
    s.insert(7);
    s.insert(7);
    s.insert(7);
    s.insert(4);
    s.insert(2);
    s.insert(45);
    s.insert(4);
    s.insert(5);

    cout<<"Set: ";
    for(auto i:s){
        cout<<i<<" ";
    }cout<<endl;

    set<int>::iterator it = s.begin();
    it++;
    s.erase(it);
    cout<<"Set after erase: ";
    for(auto i:s){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"5 is present or not: "<<s.count(5)<<endl;
    cout<<"-5 is present or not: "<<s.count(-5)<<endl;

    set<int>::iterator itr = s.find(7);    //return krta hai iterator uss particular element ka
    cout<<"Current position of iterator: "<<*itr<<endl;
    cout<<"Set from iterator: ";
    for(auto i=itr; i!=s.end(); i++){
        cout<<*i<<" ";
    }cout<<endl;
*/


    //Map: #include <map>
    //key value pair
    map<int, string> m;
    m[1]= "Aryan";
    m[13]= "Narendra";
    m[3]= "Mishra";

    m.insert({5, "bheem"});

    cout<<"Map: "<<endl;
    for(auto i:m){
        cout<<i.first<<": "<<i.second<<endl;
    }

    cout<<"13 present or not: "<<m.count(13)<<endl;
    cout<<"10 present or not: "<<m.count(10)<<endl;
    cout<<"Map before erase: "<<endl;
    for(auto i:m){
        cout<<i.first<<": "<<i.second<<endl;
    }
    m.erase(13); 
    cout<<"Map after erase: "<<endl;
    for(auto i:m){
        cout<<i.first<<": "<<i.second<<endl;
    }

    auto it = m.find(3);
    // cout<<"Value at present iterator: "(*it).first<<": "<<(*it).second<<endl;
    cout<<"Map after iterator: "<<endl;
    for(auto i=it; i!=m.end(); i++){
        cout<<(*i).first<<": "<<(*i).second<<endl;
    }

}