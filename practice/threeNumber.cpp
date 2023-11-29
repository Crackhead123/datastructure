#include<bits/stdc++.h>
using namespace std;

void threeNumber(int a[],int n)
{
    int low=0,mid=0,high=n-1;
    while(mid<=high)
    {
        if(a[mid]==0)
        {
            swap(a[mid],a[low]);
            mid++;
            low++;
        }
        else if(a[mid]==1)
        {
            mid++;
        }
        else
        {
            swap(a[mid],a[high]);
            high--;
        }
    }
}

int main()
{
    int a[]={1,0,1,2,0,1};
    int n=sizeof(a)/sizeof(a[0]);
    threeNumber(a,n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}