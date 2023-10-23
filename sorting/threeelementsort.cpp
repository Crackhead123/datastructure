#include<bits/stdc++.h>
using namespace std;

void threeElement(int a[],int n)
{
    int low=0,mid=0,high=n-1;
    while(mid<=high)
    {
        if(a[mid]==0)
        {
            swap(a[low],a[mid]);
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
    int a[]={0,1,2,1,1,2,2};
    int n=sizeof(a)/sizeof(a[0]);
    threeElement(a,n);
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
    return 0;
}