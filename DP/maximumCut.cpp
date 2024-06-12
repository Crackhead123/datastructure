#include<bits/stdc++.h>
using namespace std;

//Recursion;
int maxCut(int n,int a,int b,int c)
{
    if(n==0)
    return 0;
    if(n<0)
    return -1;

    int res=max(maxCut(n-a,a,b,c),max(maxCut(n-b,a,b,c),maxCut(n-c,a,b,c)));

    if(res==-1)
    return res;
    else
    return res+1;
}

//Dp Solution
int maxCutDp(int n,int a,int b,int c)
{
    int dp[n+1];
    dp[0]=0;
    for(int i=1;i<=n;i++)
    {
        dp[i]=-1;
        if(i-a>=0)
        dp[i]=max(dp[i],dp[i-a]);
        if(i-b>=0)
        dp[i]=max(dp[i],dp[i-b]);
        if(i-c>=0)
        dp[i]=max(dp[i],dp[i-c]);

        if(dp[i]!=-1)
        {
            dp[i]++;
        }
    }
    return dp[n];
}

int main()
{
    int n=5,a=1,b=2,c=3;
    cout<<maxCut(n,a,b,c)<<endl;
    cout<<maxCutDp(n,a,b,c)<<endl;
    return 0;
}