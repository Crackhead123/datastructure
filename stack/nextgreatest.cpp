#include<bits/stdc++.h>
using namespace std;

void nextGreatest(int a[],int n)
{
    stack<int>s;
    vector<int>res;
    s.push(a[n-1]);
    res.push_back(-1);
    for(int i=n-2;i>=0;i--)
    {
        while(s.empty()==false&&s.top()<=a[i])
        {
            s.pop();
        }
        int r=(s.empty())?(-1):s.top();
        res.push_back(r);
        s.push(a[i]);
    }
    reverse(res.begin(),res.end());
    for(auto x:res)
    {
        cout<<x<<" ";
    }
}

int main()
{
    int a[]={5,15,10,8,6,12,9,18};
    int n=sizeof(a)/sizeof(a[0]);
    nextGreatest(a,n);
    return 0;
}