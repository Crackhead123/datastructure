#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>nearestOne(vector<vector<int>>grid)
{
    int n=grid.size();
    int m=grid[0].size();
    vector<vector<int>>visited(n,vector<int>(m,0));
    vector<vector<int>>dist(n,vector<int>(m,0));
    queue<pair<pair<int,int>,int>>q;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(grid[i][j]==1)
            {
                q.push({{i,j},0});
                visited[i][j] = 1;
            }
            else
            {
                visited[i][j] = 0;
            }
        }
    }
    while(!q.empty())
    {
        int row=q.front().first.first;
        int col=q.front().first.second;
        int steps=q.front().second;
        
    }
}