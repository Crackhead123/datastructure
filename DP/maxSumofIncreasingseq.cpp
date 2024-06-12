//Maximum Sum of a Increasing Sequence
#include<bits/stdc++.h>
using namespace std;

int maxIncreasingSum(int a[],int n)
{
    int msis[n];
    for(int i=0;i<n;i++){
        msis[i]=a[i];
        for(int j=0;j<i;j++)
        {
            if(a[i]>a[j])
            {
                msis[i]=max(msis[i],a[i]+msis[j]);
            }
        }
    }
    int res=msis[0];
    for(int i=1;i<n;i++)
    {
        res=max(res,msis[i]);
    }
    return res;
}

int main()
{
    int a[]={3,20,4,6,7,30};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<"The maximum sum of an increasing sequence is "<<maxIncreasingSum(a,n);
    return 0;
}