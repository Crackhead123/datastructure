#include<bits/stdc++.h>
using namespace std;

int mergeCount(int a[],int low,int mid,int high)
{
    int n1=mid-low+1,n2=high-mid;
    int left[n1],right[n2];
    for(int i=0;i<n1;i++)
    {
        left[i]=a[i+low];
    }
    for(int j=0;j<n2;j++)
    {
        right[j]=a[mid+j+1];
    }
    int i=0,j=0,k=low,res=0;
    while(i<n2&&j<n2)
    {
        if(left[i]<=right[j])
        {
            a[k++]=left[i++];
        }
        else
        {
            a[k++]=right[j++];
            res=res+(n1-i);
        }
    }
    while(i<n1)
    {
        a[k++]=left[i++];
    }
    while(j<n2)
    {
        a[k++]=right[j++];
    }
    return res;
}



int countInversion(int a[],int low,int high)
{
    int res=0;
    if(high>low)
    {
        int mid=low+(high-low)/2;
        res=res+countInversion(a,low,mid);
        res=res+countInversion(a,mid+1,high);
        res+=mergeCount(a,low,mid,high);
    }
    return res;
}

int main()
{
    int a[]={40,30,20,10};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<countInversion(a,0,n-1);
    return 0;
}