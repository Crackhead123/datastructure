#include<bits/stdc++.h>
using namespace std;

void unionArray(int a[],int n,int b[],int m)
{
    int i=0,j=0;
    while(i<n&&j<m)
    {
        if(i>0&&a[i-1]==a[i])
        {
            i++;
            continue;
        }
        if(j>0&&b[i-1]==b[i])
        {
            j++;
            continue;
        }
        if(a[i]>b[j])
        {
            cout<<b[j]<<" ";
            j++;
        }
        else if(a[i]<b[j])
        {
            cout<<a[i]<<" ";
            i++;
        }
        else
        {
            cout<<a[i]<<" ";
            i++;
            j++;
        }
    }
    while(i<n)
    {
        if(i>0&&a[i-1]!=a[i])
        {
            cout<<a[i]<<" ";
            i++;
        }
    }
    while(j<m)
    {
        if(j>0&&b[j-1]!=b[j])
        {
            cout<<b[j]<<" ";
            j++;
        }
    }
}

int main()
{
    int a[]={2,3,3,3,4,4};
    int b[]={4,4};
    unionArray(a,sizeof(a)/sizeof(*a),b,sizeof(b)/sizeof(*b));
    return 0;
}