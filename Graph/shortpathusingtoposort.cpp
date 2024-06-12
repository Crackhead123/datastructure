#include<bits/stdc++.h>
using namespace std;

struct ANode
{
    int vertex,weight;
    ANode(int _v,int _w)
    {
        vertex=_v;
        weight=_w;
    }
    int getV()
    {
        return vertex;
    }
    int getW()
    {
        return weight;
    }
};
class Graph
{
    int V;
    list<ANode>*adj;
    void topoSortUtil(int v,bool visited[],stack<int>&s);
    public:
    Graph(int v);
    void addEdge(int u,int v,int w);
    void shortPath(int s);
};

Graph :: Graph(int V)
{
    this->V=V;
    adj=new list<ANode>[V];
}
void Graph :: addEdge(int u,int v,int w)
{
    ANode node(v,w);
    adj[u].push_back(node);
}

void Graph::topoSortUtil(int v,bool visited[],stack<int>&s)
{
    visited[v]=true;
    list<ANode>::iterator i;
    for(i=adj[v].begin();i!=adj[v].end();i++)
    {
        ANode node=*i;
        if(!visited[node.getV()])
        {
            topoSortUtil(node.getV(),visited,s);
        }
    }
    s.push(v);
}

void Graph::shortPath(int s)
{
    bool visited[V];
    fill(visited,visited+V,false);
    stack<int>st;
    for(int i=0;i<V;i++)
    {
        if(!visited[i])
        topoSortUtil(i,visited,st);
    }
    int dist[V];
    fill(dist,dist+V,INT_MAX);
    dist[s]=0;
    while(!st.empty())
    {
        int u=st.top();
        st.pop();
        list<ANode>::iterator i;
        if(dist[u]!=INT_MAX)
        {
            for(i=adj[u].begin();i!=adj[u].end();i++)
            {
                if(dist[i->getV()]>dist[u]+i->getW())
                {
                    dist[i->getV()]=dist[u]+i->getW();
                }
            }
        }
    }
    for(int i=0;i<V;i++)
    {
        (dist[i]==INT_MAX)?cout<<"INF ":cout<<dist[i]<<" ";
    }
}

int main()
{
    Graph g(6); 
	g.addEdge(0, 1, 2); 
	g.addEdge(0, 4, 1); 
	g.addEdge(1, 2, 3); 
	g.addEdge(4, 2, 2); 
	g.addEdge(4, 5, 4); 
	g.addEdge(2, 3, 6); 
	g.addEdge(5, 3, 1);

	int s = 0; 
	cout << "Following are shortest distances from source " << s <<" \n"; 
	g.shortPath(s); 

	return 0; 
}