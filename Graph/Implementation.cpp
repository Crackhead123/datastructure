#include<bits/stdc++.h>
using namespace std;


void add(vector<int>adj[],int s,int v)
{
    adj[s].push_back(v);
    adj[v].push_back(s);
}

void printGraph(vector<int>adj[],int v)
{
    for(int i=0;i<v;i++)
    {
        for(int x:adj[i])
        cout<<x<<" ";

        cout<<endl;
    }
}
int main()
{
    int v=4;
    vector<int>adj[v];
    add(adj,0,1);
    add(adj,0,2);
    add(adj,1,2);
    add(adj,1,3);
    printGraph(adj,v);
    return 0;
}