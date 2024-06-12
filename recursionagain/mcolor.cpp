#include<bits/stdc++.h>
using namespace std;
bool isSafe(bool graph[101][101],int c,int n,int i,vector<int>color)
{
    for(int j=0;j<n;j++)
    {
        if(graph[i][j]==1 && color[j]==c)
        return false;
    }
    return true;
}
bool fun(bool graph[101][101],int i,int m,int n,vector<int>color)
{
    if(i==n)
    return true;
    for(int c=1;c<=m;c++)
    {
        if(isSafe(graph,c,n,i,color))
        {
            color[i]=c;
            if(fun(graph,i+1,m,n,color))
            return true;
            color[i]=0;
        }
    }
    return false;
}
bool graphColoring(bool graph[101][101], int m, int n)
{
    vector<int>color(n,0);
    if(fun(graph,0,m,n,color)==false)
    return false;
    else
    return true;
}

int main()
{
    bool graph[101][101];
    int n=
}