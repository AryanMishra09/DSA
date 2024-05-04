/*
Given an integer array nums of unique elements, return all possible 
subsets(the power set).
The solution set must not contain duplicate subsets. Return the solution in any order.

Example 1:
Input: nums = [1,2,3]
Output: [[],[1],[2],[1,2],[3],[1,3],[2,3],[1,2,3]]

Example 2:
Input: nums = [0]
Output: [[],[0]]

LINK: https://leetcode.com/problems/subsets/description/
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> nums, int index, vector<int> output, vector<vector<int>>& ans){
        //base case
        if(index>=nums.size()){
            ans.push_back(output);
            return;
        }

        //exclude case:
        solve(nums, index+1, output, ans);

        //include case:
        int element = nums[index];
        output.push_back(element);
        solve(nums, index+1, output, ans);
    }
vector<vector<int>> subsets(vector<int>& nums) {
    vector<vector<int>> ans;
    vector<int> output;
    int index = 0;
    solve(nums, index, output, ans);
    return ans;
}

int main(){
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    vector<vector<int>> ans = subsets(nums);
    for(int i=0; i<ans.size(); i++){
        cout<<"[";
        for(int j=0; j<ans[i].size(); j++){
            cout<<ans[i][j];
        }
        cout<<"] ";
    }
}