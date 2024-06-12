#include<bits/stdc++.h>
using namespace std;

int subSum(int a[],int n,int sum)
{
    if(n==0)
    return (sum==0)?1:0;
    return subSum(a,n-1,sum)+subSum(a,n-1,sum-a[n-1]);
}

int dpSubSum(int a[],int n,int sum)
{
    int dp[n+1][sum+1];
    for(int i=0;i<=n;i++)
    {
        dp[i][0]=1;
    }
    for(int j=1;j<=sum;j++)
    {
        dp[0][j]=0;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=sum;j++)
        {
            if(j<a[i-1])
            dp[i][j]=dp[i-1][j];
            else
            {
                dp[i][j]=dp[i-1][j]+dp[i-1][j-a[i-1]];
            }
        }
    }
    return dp[n][sum];
}
int main()
{
    int a[]={2,5,3};
    int n=sizeof(a)/sizeof(a[0]);
    int sum=5;
    cout<<subSum(a,n,sum)<<endl;
    cout<<dpSubSum(a,n,sum)<<endl;
    return 0;
}