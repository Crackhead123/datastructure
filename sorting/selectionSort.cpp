#include<bits/stdc++.h>
using namespace std;

void selectionSort(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int min_ele=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[min_ele])
            {
                min_ele=j;
            }
        }
        swap(a[min_ele],a[i]);
    }
}

int main()
{
    int a[]={8,1,4,2,5,3,4};
    int n=sizeof(a)/sizeof(a[0]);
    selectionSort(a,n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}