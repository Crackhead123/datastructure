#include<bits/stdc++.h>
using namespace std;

void countSort(int a[],int n,int exp);
int findMax(int a[],int n)
{
    int max_element=a[0];
    for(int i=1;i<n;i++)
    {
        max_element=max(max_element,a[i]);
    }
    return max_element;
}

void radixSort(int a[],int n)
{
    int max_e=findMax(a,n);
    for(int exp=1;max_e/exp>0;exp=exp*10)
    {
        countSort(a,n,exp);
    }
}

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
    int index=0;
    for(int i=0;i<n;i++)
    {
        a[index++]=output[i];
    }
}

int main()
{
    int a[]={ 319,212,6,8,100,50 };
    int n=sizeof(a)/sizeof(a[0]);
    radixSort(a,n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}