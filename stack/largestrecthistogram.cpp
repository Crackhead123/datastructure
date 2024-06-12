#include<bits/stdc++.h>
using namespace std;

int getMaxArea(int a[],int n)
{
    stack<int>s;
    int res=0;
    int curr,tp;
    for(int i=0;i<n;i++)
    {
        while(s.empty()==false&&a[s.top()]>=a[i])
        {
            tp=s.top();
            s.pop();
            curr=a[tp]*((s.empty())?i:(i-s.top()-1));
            res=max(res,curr);
        }
        s.push(i);
    }
    while(s.empty()==false)
    {
        tp=s.top();
        s.pop();
        curr=a[tp]*(s.empty()?n:n-s.top()-1);
        res=max(res,curr);
    }
    return res;
}

int main()
{
    int a[]={6,2,5,4,1,5,6};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<getMaxArea(a,n);
    return 0;
}