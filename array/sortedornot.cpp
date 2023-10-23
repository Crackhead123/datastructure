#include<bits/stdc++.h>
using namespace std;

bool sortedArray(int a[],int n)
{
    for(int i=1;i<n;i++)
    {
        if(a[i]<a[i-1])
        return false;
    }
    return true;
}

int main()
{
    int a[]={11,2,3,4,5};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<sortedArray(a,n);
    return 0;
}