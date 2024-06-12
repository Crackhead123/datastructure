#include<bits/stdc++.h>
using namespace std;


void addEdge(vector<int>adj[],int s,int v)
{
    adj[s].push_back(v);
    adj[v].push_back(s);
}

void BFS1(vector<int>adj[],int s,bool visited[])
{
    queue <int> q;
    visited[s]=true;
    q.push(s);
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        cout<<u<<" ";
        for(int i:adj[u])
        {
            if(visited[i]==false)
            {
                visited[i]=true;
                q.push(i);
            }
        }
    }
}
void BFS2(vector<int>adj[],int s,int v,bool visited[])
{
    queue<int>q;
    visited[s]=true;
    q.push(s);
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        for(int i:adj[u])
        {
            if(visited[i]==false)
            {
                visited[i]=true;
                q.push(i);
            }
        }
    }
}
void BFSDis(vector<int>adj[],int v)
{
    bool visited[v];
    fill(visited,visited+v,false);
    for(int i=0;i<v;i++)
    {
        if(visited[i]==false)
        {
            BFS1(adj,i,visited);
        }
    }
}
int countIslands(vector<int>adj[],int v)
{
    int count=0;
    bool visited[v];
    fill(visited,visited+v,false);
    for(int i=0;i<v;i++)
    {
        if(visited[i]==false)
        {
            BFS2(adj,i,v,visited);
            count++;
        }
    }
    return count;
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

    cout << "Following is Breadth First Traversal: "<< endl; 
	BFSDis(adj,V);
    cout<<endl;
    cout<<"The Number of islands in the graphs are:";
    cout<<countIslands(adj,V);
    return 0;
}