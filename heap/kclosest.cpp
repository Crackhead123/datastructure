#include<bits/stdc++.h>
using namespace std;

void kthClosest(int arr[],int n,int k,int x) 
{
    priority_queue<pair<int,int>>p;
    for(int i=0;i<k;i++)
    {
        p.push({abs(arr[i]-x),i});
    }
    for(int i=k;i<n;i++)
    {
        int diff=abs(arr[i]-x);
        if(p.top().first>diff)
        {
            p.pop();
            p.push({diff,i});
        }
    }
    while(!p.empty())
    {
        cout<<arr[p.top().second]<<" ";
        p.pop();
    }
}

int main()
{
    
}