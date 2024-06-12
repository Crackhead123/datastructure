#include<bits/stdc++.h>
using namespace std;
void solve(int i,int j,int n,vector<vector<int>>&visited,vector<string>&ans,string temp,vector<vector<int>>&m)
{
    if(i==n-1&&j==n-1)
    {
        ans.push_back(temp);
        return;
    }
    if(i+1<n&&!visited[i+1][j]&&m[i+1][j]==1)
    {
        visited[i][j]=1;
        solve(i+1,j,n,visited,ans,temp+'D',m);
        visited[i][j]=0;
    }
    if(i-1>=0&&!visited[i-1][j]&&m[i-1][j]==1)
    {
        visited[i][j]=1;
        solve(i-1,j,n,visited,ans,temp+'U',m);
        visited[i][j]=0;
    }
    if(j+1<n&&!visited[i][j+1]&&m[i][j+1]==1)
    {
        visited[i][j]=1;
        solve(i,j+1,n,visited,ans,temp+'R',m);
        visited[i][j]=0;
    }
    if(j-1>=0&&!visited[i][j-1]&&m[i][j-1]==1)
    {
        visited[i][j]=1;
        solve(i,j-1,n,visited,ans,temp+'L',m);
        visited[i][j]=0;
    }
}
vector<string> findPath(vector<vector<int>> &m, int n)
{
    vector<vector<int>> visited(n, vector<int>(n, false));
    vector<string>ans;
    if(m[0][0]==1)
    {
        solve(0,0,n,visited,ans,"",m);
    }
    return ans;
}
int main()
{
    vector<vector<int>>m={{1, 0, 0, 0},
         {1, 1, 0, 1}, 
         {1, 1, 0, 0},
         {0, 1, 1, 1}};
    int n=m.size();
    vector<string>ans=findPath(m,n);
    for(auto i:ans)
    {
        cout<<i<<" ";
    }
    return 0;
}