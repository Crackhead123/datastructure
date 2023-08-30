//Program to find two odd occuring elements
#include<bits/stdc++.h>
using namespace std;

void oddCount(int a[],int n)
{
    int x=a[0];
    for(int i=1;i<n;i++)
    {
        x=x ^ a[i];
    }
    int k=(x & ~(x-1));
    int res1=0,res2=0;
    for(int i=0;i<n;i++)
    {
        if((a[i] & k)!=0)
        {
            res1=res1 ^ a[i];
        }
        else
        {
            res2=res2 ^ a[i];
        }
    }

    cout<<res1<<" "<<res2;
}


int main()
{
    int a[]={1,6,5,6,6,1};
    int n=sizeof(a)/sizeof(a[0]);
    oddCount(a,n);
    return 0;
}