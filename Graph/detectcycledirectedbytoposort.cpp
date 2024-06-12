#include<bits/stdc++.h>
using namespace std;

bool topoSort(vector<int>adj[],int v)
{
    int count=0;
    vector<int>indegree(v,0);
    for(int i=0;i<v;i++)
    {
        for(auto x: adj[i])
        {
            indegree[x]++;
        }
    }

    queue<int>q;
    for(int i=0;i<v;i++)
    {
        if(indegree[i]==0)
        q.push(i);
    }
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        for(int x:adj[u])
        {
            if(--indegree[x]==0)
            q.push(x);
        }
        count++;
    }
    return (count!=v);
}

void addEdge(vector<int>adj[],int s,int v)
{
    adj[s].push_back(v);
}

int main()
{
    int V=3;
	vector<int> adj[V];
    addEdge(adj,0,1);
    addEdge(adj,1,2);
    addEdge(adj,2,0);
    cout<<topoSort(adj,V)<<endl;
    return 0;
}