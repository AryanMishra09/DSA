/*
Given an array nums of distinct integers, 
return all the possible permutations. 
You can return the answer in any order.

Example 1:
Input: nums = [1,2,3]
Output: [[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]

Example 2:
Input: nums = [0,1]
Output: [[0,1],[1,0]]

Link: https://leetcode.com/problems/permutations/description/
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

    void solve(vector<int> nums, int index, vector<vector<int>>& ans){
        //base case:
        if(index >= nums.size()){
            ans.push_back(nums);
        }

        for(int i=index; i<nums.size(); i++){
            swap(nums[i], nums[index]);
            solve(nums, index+1, ans);
            swap(nums[i], nums[index]);
        }

    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        int index = 0;
        solve(nums, index, ans);
        return ans;
    }

int main(){
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    vector<vector<int>> ans = permute(nums);
    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<ans[i].size(); j++){
            cout<<ans[i][j];
        }cout<<endl;
    }
}