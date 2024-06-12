#include<bits/stdc++.h>
using namespace std;

//By using binary search with nlogn TC;
int ceilISD(int tail[],int l,int r,int x)
{
    while(r>l)
    {
        int m=l+(r-l)/2;
        if(tail[m]>=x)
        {
            r=m;
        }
        else
        {
            l=m+1;
        }
    }
    return r;
}

int binarySearchLIS(int a[],int n)
{
    int tail[n];
    tail[0]=a[0];
    int len=1;
    for(int i=1;i<n;i++)
    {
        if(a[i]>tail[len-1])
        {
            tail[len]=a[i];
            len++;
        }
        else
        {
            int c=ceilISD(tail,0,len-1,a[i]);
            tail[c]=a[i];
        }
    }
    return len;
}

//By recursion with n^2 TC

int dpLIS(int a[],int n)
{
    int len[n];
    len[0]=1;
    for(int i=1;i<n;i++)
    {
        len[i]=1;
        for(int j=0;j<i;j++)
        {
            if(a[j]<a[i])
            {
                len[i]=max(len[i],len[j]+1);
            }
        }
    }
    int res=len[0];
    for(int i=1;i<n;i++)
    {
        res=max(res,len[i]);
    }
    return res;
}

int main()
{
    int a[]={3,10,20,4,6,7};
    int n = sizeof(a)/sizeof(a[0]);
    cout<<binarySearchLIS(a,n)<<endl;
    return 0;
}