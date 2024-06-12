//detecting cycle in directed graph

#include<bits/stdc++.h>
using namespace std;

bool KahmAlgorithm(vector<int>adj[],int v)
{
    int count=0;
    vector<int>indegree(v,0);
    for(int i=0;i<v;i++)
    {
        for(int x:adj[i])
        {
            indegree[x]++;
        }
    }
    queue<int>q;
    for (int i=0;i<v;i++)
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
void addEdge(vector<int>adj[],int v,int u)
{
    adj[v].push_back(u);
}
int main()
{
    int V=7;
	vector<int> adj[V];
	addEdge(adj,0,1); 
	addEdge(adj,0,2); 
	addEdge(adj,2,3); 
	addEdge(adj,1,3); 
	addEdge(adj,4,5);
	addEdge(adj,5,6);
	addEdge(adj,4,6);

    cout<<KahmAlgorithm(adj,V);
    return 0;
}