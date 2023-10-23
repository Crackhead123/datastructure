#include<bits/stdc++.h>
using namespace std;

int trappedWater(int a[],int n)
{
    int res=0;
    int rMax[n],lMax[n];
    lMax[0]=a[0];
    for(int i=1;i<n;i++)
    {
        lMax[i]=max(a[i],lMax[i-1]);
    }
    rMax[n-1]=a[n-1];
    for(int i=n-2;i>=0;i--)
    {
        rMax[i]=max(a[i],rMax[i+1]);
    }

    for(int i=1;i<n-1;i++)
    {
        res=res+(min(rMax[i],lMax[i])-a[i]);
    }
    return res;
}

int main()
{
    int a[]={8,8,2,4,5,5,1};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<trappedWater(a,n);
    return 0;
}