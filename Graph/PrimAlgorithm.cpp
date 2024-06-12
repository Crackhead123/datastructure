//Minimum Spanning tree
#include<bits/stdc++.h>
using namespace std;
#define V 4

typedef pair<int,int>pii;
int spanningTree(int graph[V][V])
{
    vector<vector<int>>adj[V];
    for(int i=0;i<V;i++)
    {
        for(int j=0;j<V;j++)
        {
            if(graph[i][j]!=0)
            {
                int u=i;
                int v=j;
                int w=graph[i][j];
                adj[v].push_back({u,w});
                adj[u].push_back({v,w});
            }
        }
    }
    priority_queue<pii,vector<pii>,greater<pii>>pq;
    vector<bool>visited(V,false);
    int res=0;
    pq.push({0,0});
    while(!pq.empty())
    {
        auto p=pq.top();
        pq.pop();
        int w=p.first;
        int u=p.second;
        if(visited[u]==true)
        continue;
        res+=w;
        visited[u]=true;
        for(auto v:adj[u])
        {
            if(visited[v[0]]==false)
            {
                pq.push({v[1],v[0]});
            }
        }
    }
    return res;
}

int main()
{
    int graph[V][V] = { { 0, 5, 8, 0}, 
						{ 5, 0, 10, 15 }, 
						{ 8, 10, 0, 20 }, 
						{ 0, 15, 20, 0 },}; 
 
    // Function call
    cout << spanningTree(graph) << endl;
 
    return 0;
}