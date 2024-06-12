#include<bits/stdc++.h>
using namespace std;

class Graph
{
    int V;
    list<int>*adj;
    void APUtil(int v,bool visited[],int low[],int disc[],int parent[],bool ap[]);
    public:
    Graph(int V);
    void addEdge(int v,int w);
    void AP();
};

Graph ::Graph(int V)
{
    this->V=V;
    adj=new list<int>[V];
}
void Graph::addEdge(int v,int w)
{
    adj[v].push_back(w);
    adj[w].push_back(v);
}
void Graph::APUtil(int v,bool visited[],int low[],int disc[],int parent[], bool ap[])
{
    static int time=0;
    int children=0;
    visited[v]=true;
    disc[v]=low[v]=++time;
    list<int>::iterator i;
    for(i=adj[v].begin();i!=adj[v].end();i++)
    {
        int u=*i;
        if(!visited[u])
        {
            children++;
            parent[u]=v;
            APUtil(u,visited,low,disc,parent,ap);
            low[v]=min(low[u],low[v]);
            if(parent[v]==-1&&children>1)
            ap[v]=true;
            if(parent[v]!=-1&&low[u]>=disc[v])
            ap[v]=true;
        }
        else if(u!=parent[v])
        low[v]=min(low[v],disc[u]);
    }
}
void Graph::AP()
{
    bool *visited=new bool[V];
    int *parent=new int[V];
    int *low=new int[V];
    bool *ap=new bool[V];
    int *disc=new int[V];
    for(int i=0;i<V;i++)
    {
        parent[i]=-1;
        visited[i]=false;
        ap[i]=false;
    }
    for(int i=0;i<V;i++)
    {
        if(!visited[i])
        APUtil(i,visited,low,disc,parent,ap);
    }
    for(int i=0;i<V;i++)
    {
        if(ap[i])
        cout<<i<<" ";
    }
}

int main()
{
    cout << "Articulation points in first graph \n";
	Graph g(5); 
	g.addEdge(1, 0); 
	g.addEdge(0, 2); 
	g.addEdge(2, 1); 
	g.addEdge(0, 3); 
	g.addEdge(3, 4); 
	g.AP(); 
	
	return 0; 
}