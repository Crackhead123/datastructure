#include<bits/stdc++.h>
using namespace std;

void countSort(int a[],int n,int exp)
{
    int count[10];
    for(int i=0;i<10;i++)
    {
        count[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        count[(a[i]/exp)%10]++;
    }
    for(int i=1;i<10;i++)
    {
        count[i]=count[i-1]+count[i];
    }
    int output[n];
    for(int i=n-1;i>=0;i--)
    {
        output[count[(a[i]/exp)%10]-1]=a[i];
        count[(a[i]/exp)%10]--;
    }
    for(int i=0;i<n;i++)
    {
        a[i]=output[i];
    }
}

void radixSort(int a[],int n)
{
    int maxItem=a[0];
    for(int i=1;i<n;i++)
    {
        if(a[i]>maxItem)
        {
            maxItem=a[i];
        }
    }
    for(int exp=1;maxItem/exp>0;exp=exp*10)
    {
        countSort(a,n,exp);
    }
}

int main()
{
    int a[]={319,212,6,8,100,50};
    int n=sizeof(a)/sizeof(a[0]);
    radixSort(a,n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}