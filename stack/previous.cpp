#include<bits/stdc++.h>
using namespace std;

void previousGreater(int a[],int n)
{
    stack<int>s;
    s.push(0);
    cout<<(-1)<<" ";
    for(int i=1;i<n;i++)
    {
        while(s.empty()==false&&a[s.top()]<a[i])
        {
            s.pop();
        }
        if(s.empty())
        {
            cout<<(-1)<<" ";
        }
        else
        {
            int index = s.top();
            cout<<a[index]<<" ";
        }
        s.push(i);
    }
}
int main()
{
    int a[]={15,10,18,12,4,6,2,8};
    int n=sizeof(a)/sizeof(a[0]);
    previousGreater(a,n);
    return 0;
}