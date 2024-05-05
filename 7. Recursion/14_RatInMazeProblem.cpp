/*
Consider a rat placed at (0, 0) in a square matrix of order N * N. 
It has to reach the destination at (N - 1, N - 1). 
Find all possible paths that the rat can take to reach from source to destination. 
The directions in which the rat can move are 'U'(up), 'D'(down), 'L' (left), 'R' (right). 
Value 0 at a cell in the matrix represents that it is blocked and rat cannot move to it 
while value 1 at a cell in the matrix represents that rat can be travel through it.
            Note: In a path, no cell can be visited more than one time. 
            If the source cell is 0, the rat cannot move to any other cell.

Example 1:
Input:
N = 4
m[][] = {{1, 0, 0, 0},
         {1, 1, 0, 1}, 
         {1, 1, 0, 0},
         {0, 1, 1, 1}}
Output:
DDRDRR DRDDRR
Explanation:
The rat can reach the destination at 
(3, 3) from (0, 0) by two paths - DRDDRR 
and DDRDRR, when printed in sorted order 
we get DDRDRR DRDDRR.
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool isPossible(vector<vector<int>> m, int n, int x, int y, vector<vector<int>>& visited){
    if((x>=0 && x<n) && (y>=0 && y<n) && visited[x][y]==0 && m[x][y]==1){
        return true;
    }else{
        return false;
    }
}

void solve(vector<vector<int>> m, int n, vector<string>& ans, int x, int y, vector<vector<int>>& visited, string path){
    //base case
    if(x==(n-1) && y==(n-1)){
        ans.push_back(path);
        return;
    }
    //agr yaha aa gaye h matlab (x,y) bhi visited ho gaya:
    visited[x][y] = 1;

    //we have 4 moves to make:

    //down
    int newx = x + 1;
    int newy = y;
    if(isPossible(m, n, newx, newy, visited)){
        path.push_back('D');
        solve(m, n, ans, newx, newy, visited, path);
        path.pop_back();
    }
    //left
    newx = x;
    newy = y - 1;
    if(isPossible(m, n, newx, newy, visited)){
        path.push_back('L');
        solve(m, n, ans, newx, newy, visited, path);
        path.pop_back();
    }
    //right
    newx = x;
    newy = y + 1;
    if(isPossible(m, n, newx, newy, visited)){
        path.push_back('R');
        solve(m, n, ans, newx, newy, visited, path);
        path.pop_back();
    }
    //up
    newx = x-1;
    newy = y;
    if(isPossible(m, n, newx, newy, visited)){
        path.push_back('U');
        solve(m, n, ans, newx, newy, visited, path);
        path.pop_back();
    }

    visited[x][y] = 0;
}

vector<string> findPath(vector<vector<int>> m, int n){
    vector<string> ans;
    if(m[0][0] == 0){
        return ans;
    }
    int srcx = 0;
    int srcy = 0;
    vector<vector<int>> visited(n, vector<int>(n, 0));

    string path = "";
    solve(m, n, ans, srcx, srcy, visited, path);
    sort(ans.begin(), ans.end());
    return ans;
}

int main(){
    int n = 4;
    vector<vector<int>> m(n, vector<int>(n, 0));
    m[0][0] = 1;
    m[0][1] = 0;
    m[0][2] = 0;
    m[0][3] = 0; 
    m[1][0] = 1;
    m[1][1] = 1;
    m[1][2] = 0;
    m[1][3] = 1;
    m[2][0] = 1;
    m[2][1] = 1;
    m[2][2] = 0;
    m[2][3] = 0;
    m[3][0] = 0;
    m[3][1] = 1;
    m[3][2] = 1;
    m[3][3] = 1;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<m[i][j]<<" ";
        }cout<<endl;
    }
    cout<<endl;

    vector<string> ans= findPath(m, n);
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
}