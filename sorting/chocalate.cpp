#include<bits/stdc++.h>
using namespace std;

int minChocalate(int a[],int n,int m)
{
    if(m>n)
    {
        return -1;
    }
    sort(a,a+n);
    int res=a[m-1]-a[0];
    for(int i=1;(i+m-1)<n;i++)
    {
        res=min(res,a[i+m-1]-a[i]);
    }
    return res;
}
int main()
{
    int a[]={7,3,2,4,9,12,56};
    int n=sizeof(a)/sizeof(a[0]);
    int m=3;
    cout<<minChocalate(a,n,m);
    return 0;
}