//peak element search by using binary search


#include <iostream>
using namespace std;

int findpeakuntil(int a[],int low,int high,int n)
{
    int mid;
    mid=(low+high)/2;

    if((mid==0||a[mid-1]<a[mid])&&(mid==n-1||a[mid+1]<a[mid]))
    {
        return mid;
    }
    else if(mid>0&&a[mid-1]>a[mid])
    {
        findpeakuntil(a,low,mid+1,n);
    }
    else 
    {
        findpeakuntil(a,mid+1,high,n);
    }
}


int findpeak(int a[],int n)
{
    return findpeakuntil(a,0,n-1,n);
}


int main()
{
    int arr[] = { 1, 3, 20, 4, 1, 0 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Index of a peak point is "
         << findpeak(arr, n);
    return 0;
}