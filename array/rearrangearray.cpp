#include<bits/stdc++.h>
using namespace std;
void rearrangeRange(int a[],int n)
{
    a[0]=(n*a[a[0]])+a[0];
    for(int i=1;i<n;i++)
    {
        a[i]=(n*(a[a[i]]%n)+a[i]);
    }

    for(int i=0;i<n;i++)
    {
        a[i]=a[i]/n;
    }
}

int main()
{
    int a[]={4,0,2,1,3};
    int n=sizeof(a)/sizeof(a[0]);
    rearrangeRange(a,n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
    }