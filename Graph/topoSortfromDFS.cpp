//Implementation of topological sorting from DFS.

#include<bits/stdc++.h>
using namespace std;


void DFSrec(vector<int>adj[],int s,bool visited[],stack<int>&st)
{
    visited[s]=true;
    for(int i:adj[s])
    {
        if(visited[i]==false)
        DFSrec(adj,i,visited,st);
    }
    st.push(s);
} 
void DFS(vector<int>adj[],int v)
{
    bool visited[v];
    fill(visited,visited+v,false);
    stack<int>st;
    for(int i=0;i<v;i++)
    {
        if(visited[i]==false)
        {
            DFSrec(adj,i,visited,st);
        }
    }
    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
}
void addEdge(vector<int>adj[],int u,int v)
{
    adj[u].push_back(v);
}
int main()
{
    	int V=5;
	vector<int> adj[V];
	addEdge(adj,0, 1); 
    addEdge(adj,1, 3); 
    addEdge(adj,2, 3); 
    addEdge(adj,3, 4); 
    addEdge(adj,2, 4);  
  
    cout << "Following is a Topological Sort of\n"; 
    DFS(adj,V);

	return 0; 
}