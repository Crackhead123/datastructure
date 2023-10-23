#include<bits/stdc++.h>
using namespace std;

int lomutoPartition(int a[],int low,int high)
{
    int pivot=a[high];
    int i=low-1;
    for(int j=low;j<high-1;j++)
    {
        if(a[j]<pivot)
        {
            i++;
            swap(a[i],a[j]);
        }
    }
    swap(a[i+1],a[high]);
    return i+1;
}

void quickSort(int a[],int low,int high)
{
    if(low<high)
    {
        int p=lomutoPartition(a,low,high);
        quickSort(a,low,p-1);
        quickSort(a,p+1,high);
    }
}

int main()
{
    int a[]={8,4,7,9,3,10,5};
    int n=sizeof(a)/sizeof(a[0]);
    quickSort(a,0,n-1);
    for(int x: a)
    cout<<x<<" ";
    return 0;
}