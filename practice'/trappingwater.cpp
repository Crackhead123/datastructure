#include<bits/stdc++.h>
using namespace std;

int trapWater(int a[],int n)
{
    int res=0;
    int rMax[n],lMax[n];
    rMax[n-1]=a[n-1];
    for(int i=n-2;i>=0;i--)
    {
        rMax[i]=max(a[i],rMax[i+1]);
    }
    lMax[0]=a[0];
    for(int i=1;i<n;i++)
    {
        lMax[i]=max(a[i],lMax[i-1]);
    }
    for(int i=1;i<n-1;i++)
    {
        res=res+(min(rMax[i],lMax[i])-a[i]);
    }
    return res;
}