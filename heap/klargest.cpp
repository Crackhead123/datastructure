#include<bits/stdc++.h>
using namespace std;

void kthLargest(int a[],int n,int k)
{
    priority_queue<int,vector<int>,greater<int>> pq;  // min heap
    for(int i=0;i<k;i++)
    {
        pq.push(a[i]);
    }
    for(int i=k;i<n;i++)
    {
        if(pq.top()>a[i])
        continue;
        else
        {
            pq.pop();
            pq.push(a[i]);
        }
    }
    while(!pq.empty())
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
}
int main()
{
    
}