#include<bits/stdc++.h>
using namespace std;

int delelte(int a[],int n,int k)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(a[i]==k)
        {
            break;
        }
    }
    if(i==n)
    return n;

    for(int j=i;j<n-1;j++)
    {
        a[j]=a[j+1];
    }
    return n-1;
}

int main()
{
    int a[]={5,42,52,1,53,75};
    int n=6;
    int k=53;
    int new_n=delelte(a,n,k);
    for(int i=0;i<new_n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}