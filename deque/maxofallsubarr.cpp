#include<bits/stdc++.h>
using namespace std;

void maxOfSubarray(int a[],int n,int k)
{
    deque<int>dq;
    for(int i=0;i<k;i++)
    {
        while(!dq.empty()&&a[i]>=a[dq.back()])
        {
            dq.pop_back();
        }
        dq.push_back(i);
    }
    for(int i=k;i<n;i++)
    {
        cout<<a[dq.front()]<<" ";
        while(!dq.empty()&&dq.front()<=i-k)
        {
            dq.pop_front();
        }
        while(!dq.empty()&&a[i]>=a[dq.back()])
        {
            dq.pop_back();
        }
        dq.push_back(i);
    }
    cout<<a[dq.front()]<<" ";
}