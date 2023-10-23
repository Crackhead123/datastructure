#include<bits/stdc++.h>
using namespace std;

void maxHeapify(int a[],int n,int i)
{
    int largest=i,left=2*i+1,right=2*i+2;
    if(left<n&&a[left]>a[largest])
    {
        largest=left;
    }
    if(right<n&&a[right]>a[largest])
    {
        largest=right;
    }
    if(largest!=i)
    {
        swap(a[largest],a[i]);
        maxHeapify(a,n,largest);
    }
}

void buildHeap(int a[],int n)
{
    for(int i=(n-2)/2;i>=0;i--)
    {
        maxHeapify(a,n,i);
    }
}

void heapSort(int a[],int n)
{
    buildHeap(a,n);
    for(int i=n-1;i>=0;i--)
    {
        swap(a[i],a[0]);
        maxHeapify(a,i,0);
    }
}

int main()
{
    int a[]={10,15,50,40,20};
    int n=sizeof(a)/sizeof(a[0]);
    heapSort(a,n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}