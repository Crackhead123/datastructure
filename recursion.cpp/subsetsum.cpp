#include<bits/stdc++.h>
using namespace std;


int countSubSet(int a[],int n,int sum)
{
    if(n==0)
    {
        return (sum==0)?1:0;
    }
    return countSubSet(a,n-1,sum)+countSubSet(a,n-1,sum-a[n-1]);
}

int main()
{
    int a[]={1,2,3};
    int n=sizeof(a)/sizeof(a[0]);
    int sum=4;
    cout<<countSubSet(a,n,sum);
    return 0;
}