#include<bits/stdc++.h>
using namespace std;

int duplicate(int a[],int n)
{
    int res=1;
    for(int i=1;i<n;i++)
    {
        if(a[i]!=a[res-1])
        {
            a[res]=a[i];
            res++;
        }
    }
    return res;
}


int main()
{
    int a[]={10,20,20,30,30,30};
    int n=6;
    int res=duplicate(a,n);
    for(int i=0;i<res;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}