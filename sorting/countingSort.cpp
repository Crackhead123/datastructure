#include<bits/stdc++.h>
using namespace std;

void countingSort(int a[],int n,int k)
{
    int count[k];
    for(int i=0;i<k;i++)
    {
        count[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        count[a[i]]++;
    }
    for(int i=1;i<k;i++)
    {
        count[i]=count[i-1]+count[i];
    }
    int output[n];
    for(int i=n-1;i>=0;i--)
    {
        output[count[a[i]]-1]=a[i];
        count[a[i]]--;
    }
    for(int i=0;i<n;i++)
    {
        a[i]=output[i];
    }
}

int main()
{
    int a[]={1,4,4,1,0,1};
    int n=sizeof(a)/sizeof(a[0]);
    countingSort(a,n,5);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}