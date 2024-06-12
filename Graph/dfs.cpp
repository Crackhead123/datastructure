#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<int>adj[],int s,int v)
{
    adj[s].push_back(v);
    adj[v].push_back(s);
}

void DFSRec1(vector<int>adj[],int s,bool visited[])
{
    visited[s]=true;
    for(int u:adj[s])
    {
        if(visited[u]==false)
        {
            DFSRec1(adj,u,visited);
        }
    }
}
void DFSRec(vector<int>adj[],int s,bool visited[])
{
    visited[s]=true;
    cout<<s<<" ";
    for(int u:adj[s])
    {
        if(visited[u]==false)
        {
            DFSRec(adj,u,visited);
        }
    }
}
void DFS(vector<int>adj[], int V) 
{
    bool visited[V];
    fill(visited,visited+V,false);
    for(int i=0;i<V;i++){
        if(visited[i]==false)
        {
            DFSRec(adj,i,visited);
        }
    }
}
int countIslands(vector<int>adj[],int V)
{
    int count=0;
    bool visited[V];
    fill(visited,visited+V,false);
    for(int i=0;i<V;i++)
    {
        if(visited[i]==false)
        {
            DFSRec1(adj,i,visited);
            count++;
        }
    }
    return count;
}

int main()
{
    int V=5;
	vector<int> adj[V];
	addEdge(adj,0,1); 
	addEdge(adj,0,2); 
	addEdge(adj,1,2);
	addEdge(adj,3,4);
    DFS(adj,V);
    cout<<endl;
    cout << "Number of connected components: "<< countIslands(adj,V); 
    return 0;
}