#include<bits/stdc++.h>

using namespace std;


int maxSum(int a[],int n)
{
    if(n==1)
    return a[0];
    if(n==2)
    return max(a[0],a[1]);
    else
    return max(maxSum(a,n-1),maxSum(a,n-2)+a[n-1]);
}
int dpMaxSum(int a[],int n)
{
    if(n==1)
    return a[0];
    int dp[n+1];
    dp[1]=a[0];
    dp[2]=max(a[0],a[1]);
    for(int i=3;i<=n;i++)
    {
        dp[i]=max(dp[i-1],a[i-1]+dp[i-2]);
    }
    return dp[n];
}

int main()
{
    int a[]={1,10,2};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<maxSum(a,n)<<endl;
    cout<<dpMaxSum(a,n)<<endl;
    return 0;
}