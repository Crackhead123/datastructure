#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<int>adj[],int v,int s)
{
    adj[v].push_back(s);
}

bool DFSRec(vector<int>adj[],int s,bool visited[],bool  recStack[])
{
    visited[s]=true;
    recStack[s]=true;
    for(int u:adj[s])
    {
        if(visited[u]==false&&DFSRec(adj,u,visited,recStack)) return true;
        else if(recStack[u]==true) return true;
    }
    recStack[s]=false;
    return false;
}

bool DFS(vector<int>adj[],int v)
{
    bool visited[v],recStack[v];
    for(int i=0;i<v;i++)
    {
        visited[i]=false;
        recStack[i]=false;
    }
    for(int i=0;i<v;i++)
    {
        if(visited[i]==false)
        {
            if(DFSRec(adj,i,visited,recStack)==true)
            return true ;
        }
    }
    return false;
}

int main()
{
    
}