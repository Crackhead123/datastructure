#include<bits/stdc++.h>
using namespace std;

int binarySearch(int a[],int low,int high,int key)
{
    if(low>high)
    {
        return -1;
    }
    int mid=(low+high)/2;
    if(a[mid]==key)
    {
        return mid;
    }
    else if(a[mid]>key)
    {
        return binarySearch(a,low,mid-1,key);
    }
    else 
    {
        return binarySearch(a,mid+1,high,key);
    }
}

int main()
{
    int a[]={1,2,3,4,5,6};
    int n=sizeof(a)/sizeof(a[0]);
    int key=1;
    cout<<binarySearch(a,0,n-1,key);
    return 0;
}