#include<bits/stdc++.h>
using namespace std;

int minDiff(int a[],int n)
{
    sort(a,a+n);
    int res=INT_MAX;
    for(int i=1;i<n;i++)
    {
        res=min(res,a[i]-a[i-1]);
    }
    return res;
}


int main()
{
    int a[]={1,8,12,5,18};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<minDiff(a,n)<<endl;
    return 0;
}