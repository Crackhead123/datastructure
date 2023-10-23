#include<bits/stdc++.h>
using namespace std;

int partition(int a[],int l,int h)
{
    int pivot=a[h];
    int i=l-1;
    for(int j=l;j<=h-1;j++)
    {
        if(a[j]<pivot)
        {
            i++;
            swap(a[i],a[j]);
        }
    }
    swap(a[i+1],a[h]);
    return i+1;
}

int kthSmallest(int a[],int n,int k)
{
    int l=0,h=n-1;
    while(l<=h)
    {
        int p=partition(a,l,h);
        if(p==k-1)
        {
            return a[p];
        }
        else if(p>k-1)
        {
            h=p-1;
        }
        else 
        {
            l=p+1;
        }
    }
    return -1;
}


int main()
{
    int a[]={10,4,5,8,11,6,26};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<kthSmallest(a,n,3);
    return 0;
}