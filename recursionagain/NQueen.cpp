#include<bits/stdc++.h>
using namespace std;

bool isSafe(int row,int col,vector<string>&temp,int n)
{
    for(int i=0;i<col;i++)
    {
        if(temp[row][i]=='Q')
        return false;
    }
    for(int i=row,j=col;i>=0&&j>=0;i--,j--)
    {
        if(temp[i][j]=='Q')
        return false;
    }
    for(int i=row,j=col;i<n&&j>=0;i++,j--)
    {
        if(temp[i][j]=='Q')
        return false;
    }
    return true;
}
void fun(int col,int n,vector<string>&temp,vector<vector<string>>&ans)
{
    if(col==n)
    {
        ans.push_back(temp);
        return;
    }
    for(int i=0;i<n;i++)
    {
        if(isSafe(i,col,temp,n))
        {
            temp[i][col]='Q';
            fun(col+1,n,temp,ans);
            temp[i][col]='.';
        }
    }
}
vector<vector<string>> solveNQueens(int n)
{
    vector<vector<string>>ans;
    vector<string>temp(n);
    string s(n,'.');
    for(int i=0;i<n;i++)
    {
        temp[i]=s;
    }
    fun(0,n,temp,ans);
    return ans;
}

int main()
{
    int n=4;
    vector<vector<string>>ans=solveNQueens(n);
    for(int i=0;i<ans.size();i++)
    {
        for(int j=0;j<ans[i].size();j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}