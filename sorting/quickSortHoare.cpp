#include<bits/stdc++.h>
using namespace std;

int hoarePartition(int a[],int low,int high)
{
    int pivot=a[low];
    int i=low-1,j=high+1;
    while(true)
    {
        do
        {
            i++;
        }while(a[i]<pivot);
        do
        {
            j--;
        }while(a[j]>pivot);
        if(i>=j)
        {
            return j;
        }
        swap(a[i],a[j]);
    }
}
void quickSort(int a[],int l,int h)
{
    if(l<h)
    {
        int p=hoarePartition(a,l,h);
        quickSort(a,l,p);
        quickSort(a,p+1,h);
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