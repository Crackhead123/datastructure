//Program to find one element in the array occuring odd numbers of times.
#include<bits/stdc++.h>
using namespace std;

int occuronce(int a[],int n)
{
    int res=0;
    for(int i=0;i<n;i++)
    {
        res=res ^ a[i];
    }
    return res;
}

int main()
{
    int a[]={4,3,4,4,4,5,5};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<occuronce(a,n);
    return 0;
}