#include<bits/stdc++.h>
using namespace std;

int binary_search(int a[],int n,int key)
{
    int low=0,high=n-1;
    int mid=(low+high)/2;
    if(a[mid]==key)
    {
        return mid;
    }
    while(low<=high)
    {
        mid=(low+high)/2;
        if(a[mid]==key)
        {
            return mid;
        }
        if(a[mid]>key)
        {
            high=mid-1;
        }
        else if(a[mid]<key)
        {
            low=mid+1;
        }
    }
    return -1;
}

int main()
{
    int a[]={1,2,3,4,5,6};
    int n=sizeof(a)/sizeof(a[0]);
    int key=10;
    cout<<binary_search(a,n,key);
    return 0;
}