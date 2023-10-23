#include<bits/stdc++.h>
using namespace std;


int normalSubarray(int a[],int n)
{
    int curr=a[0],res=a[0];
    for(int i=1;i<n;i++)
    {
        curr=max(curr+a[i],a[i]);
        res=max(res,curr);
    }
    return res;
}

int overallMaxSum(int a[],int n)
{
    int max_normal=normalSubarray(a,n);
    if(max_normal<0)
    return max_normal;

    int arr_sum=0;
    for(int i=0;i<n;i++)
    {
        arr_sum+=a[i];
        a[i]=-a[i];
    }

    int max_circular=arr_sum+normalSubarray(a,n);
    return max(max_normal,max_circular);
}


int main()
{
    int a[]={5,-2,3,4};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<overallMaxSum(a,n);
    return 0;
}