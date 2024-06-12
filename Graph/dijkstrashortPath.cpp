#include<bits/stdc++.h>
using namespace std;

typedef pair<int, int> iPair;
 
// This class represents a directed graph using
// adjacency list representation
class Graph {
    int V; // No. of vertices
 
    // In a weighted graph, we need to store vertex
    // and weight pair for every edge
    list<pair<int, int> >* adj;
 
public:
    Graph(int V); // Constructor
 
    // function to add an edge to graph
    void addEdge(int u, int v, int w);
 
    // prints shortest path from s
    void shortestPath(int s);
};
Graph::Graph(int V)
{
    this->V=V;
    adj=new list<iPair>[V];
}
void Graph :: addEdge(int u,int v,int w)
{
    adj[v].push_back({u,w});
    adj[u].push_back({v,w});
}

void Graph :: shortestPath(int s)
{
    priority_queue<iPair,vector<iPair>,greater<iPair>>pq;
    int dist[V];
    fill(dist,dist+V,INT_MAX);
    dist[s]=0;
    pq.push({0,s});
    while(!pq.empty())
    {
        int u=pq.top().second;
        pq.pop();
        for(auto i=adj[u].begin();i!=adj[u].end();i++)
        {
            int v=(*i).first;
            int w=(*i).second;
            if(dist[v]>dist[u]+w)
            {
                dist[v]=dist[u]+w;
                pq.push({dist[v],v});
            }
        }
    }

    for(int i=0;i<V;i++)
    {
        cout<<dist[i]<<" ";
    }
}

int main()
{
    int V = 9;
    Graph g(V);
 
    // making above shown graph
    g.addEdge(0, 1, 4);
    g.addEdge(0, 7, 8);
    g.addEdge(1, 2, 8);
    g.addEdge(1, 7, 11);
    g.addEdge(2, 3, 7);
    g.addEdge(2, 8, 2);
    g.addEdge(2, 5, 4);
    g.addEdge(3, 4, 9);
    g.addEdge(3, 5, 14);
    g.addEdge(4, 5, 10);
    g.addEdge(5, 6, 2);
    g.addEdge(6, 7, 1);
    g.addEdge(6, 8, 6);
    g.addEdge(7, 8, 7);
 
    // Function call
    g.shortestPath(0);
 
    return 0;
}