#include<bits/stdc++.h>
using namespace std;    

int minJump(int a[],int n)
{
    if(n==1)
    return 0;

    int res=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(i+a[i]>=n-1)
        {
            int sub_res=minJump(a,i+1);
            if(sub_res!=INT_MAX)
            {
                res=max(res,sub_res+1);
            }
        }
    }
    return res;
}

//DP solution

int getMinJump(int a[],int n)
{
    int dp[n];
    dp[0]=0;
    for(int i=1;i<n;i++)
    {
        dp[i]=INT_MAX;
    }
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(a[j]+j>=i)
            {
                if(dp[j]!=INT_MAX)
                {
                    dp[i]=min(dp[i],dp[j]+1);
                }
            }
        }
    }
    return dp[n-1];
}