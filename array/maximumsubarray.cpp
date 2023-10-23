#include<bits/stdc++.h>
using namespace std;

int maxSum(int a[],int n)
{
    int maxEnding=a[0];
    int res=a[0];
    for(int i=1;i<n;i++)
    {
        maxEnding=max(maxEnding+a[i],a[i]);
        res=max(res,maxEnding);
    }
    return res;
}

int main()
{
    int a[]={-2, -5, 6, -2, -3, 1, 5, -6};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<maxSum(a,n);
    return 0;
}