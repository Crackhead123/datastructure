#include<bits/stdc++.h>
using namespace std;

int countWays(int a[],int n,int s)
{
    int dp[n+1][s+1];
    for(int i=0;i<=n;i++)
    {
        dp[i][0]=1;
    }
    for(int j=1;j<=s;j++)
    {
        dp[0][j]=0;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=s;j++)
        {
            if()
        }
    }
    return dp[n][s];
}
int main()
{
    int a[]={1, 2 ,3 ,4 ,5, 6, 7, 8, 9, 10, 11};
    int sum=149;
    int n=sizeof(a)/sizeof(a[0]);
    cout<<countWays(a,n,sum);
    return 0;
}