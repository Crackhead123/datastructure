#include<bits/stdc++.h>
using namespace std;


void heapify(int a[],int n,int i)
{
    int largest=i,l=2*i+1,r=2*i+2;
    if(l<n&&a[l]>a[largest])
    largest=l;
    if(r<n&&a[r]>a[largest])
    largest=r;

    if(largest!=i)
    {
        swap(a[largest],a[i]);
        heapify(a,n,largest);
    }
}

void buildHeap(int a[],int n)
{
    for(int i=(n-2)/2;i>=0;i--)
    {
        heapify(a,n,i);
    }
}

void heapSort(int a[],int n)
{
    buildHeap(a,n);
    for(int i=n-1;i>=0;i--)
    {
        swap(a[0],a[i]);
        heapify(a,i,0);
    }
}

int main()
{
    int arr[] = {12, 11, 13, 5, 6, 7}; 
	int n = sizeof(arr)/sizeof(arr[0]);
    heapSort(arr, n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}