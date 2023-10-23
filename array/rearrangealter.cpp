#include<bits/stdc++.h>
using namespace std;

void rearrangeAlter(int a[],int n)
{
    int max=a[n-1]+1;
    int low=0,high=n-1,i=0;
    for(i=0;i<n;i=i+2)
    {
        if(low<high)
        {
            a[i]=(a[high]%max)*max+a[i];
            a[i+1]=(a[low]%max)*max+a[i+1];
            low++;
            high--;
        }
    }
    if(low==high)
    {
        a[n-1]=(a[low]%max)*max+a[n-1];
    }
    for(int i=0;i<n;i++)
    {
        a[i]=a[i]/max;
    }
}

int main()
{
    int a[]={9877};
    int n=sizeof(a)/sizeof(a[0]);
    rearrangeAlter(a,n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}