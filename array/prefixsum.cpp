#include<bits/stdc++.h>
using namespace std;
int getSum(int ps[],int i,int j)
{
    if(i==0)
    {
        return ps[j];
    }
    return ps[j]-ps[i-1];
}

int main()
{
    int a[]={2,8,3,9,6,5,4};
    int n=7;
    int p[n];
    p[0]=a[0];
    for(int i=1;i<n;i++)
    {
        p[i]=p[i-1]+a[i];
    }
    cout<<getSum(p,1,3);
    return 0;
}