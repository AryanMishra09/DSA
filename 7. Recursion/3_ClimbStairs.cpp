/*

Problem statement
You have been given a number of stairs. Initially, you are at the 0th stair, and you need to reach the Nth stair.
Each time, you can climb either one step or two steps.
You are supposed to return the number of distinct ways you can climb from the 0th step to the Nth step.

Example :
N=3
We can climb one step at a time i.e. {(0, 1) ,(1, 2),(2,3)} 
or we can climb the first two-step and then one step i.e. {(0,2),(1, 3)} 
or we can climb first one step and then two step i.e. {(0,1), (1,3)}.

LINK: https://leetcode.com/problems/climbing-stairs/description/

*/

#include <iostream>
using namespace std;

int climb(int n){
    if(n<0){
        return 0;
    }
    if(n==0){
        return 1;
    }
    return climb(n-1) + climb(n-2);
}

int main(){
    int n = 5;
    int ans = climb(n);
    cout<<ans;
}