#include<bits/stdc++.h>
using namespace std;

int main()
{
    int res=0;
    int a[]={1,12,5,111,200};
    int n=5;
    int sum=10;
    priority_queue<int,vector<int>,greater<int>>pq;
    for(int i=0;i<n;i++)
    {
        pq.push(a[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(pq.top()<=sum)
        {
            sum-=pq.top();
            pq.pop();
            res++;
        }
        else
        {
            break;
        }
    }
    cout<<res<<" ";
    return 0;
}