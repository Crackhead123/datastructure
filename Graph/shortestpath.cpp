#include<bits/stdc++.h>
using namespace std;

void BFS(vector<int>abj[],int v,int s,int dis[])
{
    bool visited[v];
    fill(visited,visited+v,false);
    queue<int>q;
    visited[s]=true;
    q.push(s);
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        for(int x:abj[u])
        {
            if(visited[x]==false)
            {
                dis[x]=dis[u]+1;
                visited[x]=true;
                q.push(x);
            }
        }
    }
}
void addEdge(vector<int>adj[],int s,int v)
{
    adj[s].push_back(v);
    adj[v].push_back(s);
}
int main()
{
    int v=4;
    vector<int>adj[v];
    addEdge(adj,0,1); 
	addEdge(adj,1,2); 
	addEdge(adj,2,3); 
	addEdge(adj,0,2); 
	addEdge(adj,1,3);
    int dis[v];
    fill(dis,dis+v,INT_MAX);
    dis[0]=0;
    BFS(adj,v,0,dis);
    for(int x:dis)
    {
        cout<<x<<" ";
    }
    return 0;
}