#include<bits/stdc++.h>
using namespace std;

int knapSack(int W,int wt[],int val[],int n)
{
    if(n==0||W==0)
    return 0;
    if(wt[n-1]>W)
    {
        return knapSack(W,wt,val,n-1);
    }
    else
    {
        return max(knapSack(W,wt,val,n-1),val[n-1]+knapSack(W-wt[n-1],wt,val,n-1));
    }
}

//DP Solution

int dpKnapSack(int W,int wt[],int val[],int n)
{
    int dp[n+1][W+1];
    for(int i=0;i<=n;i++)
    {
        dp[i][0]=0;
    }
    for(int i=0;i<=W;i++)
    {
        dp[0][i]=0;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=W;j++)
        {
            if(wt[i-1]>j)
            {
                dp[i][j]=dp[i-1][j];
            }
            else
            {
                dp[i][j]=max(dp[i-1][j],val[i-1]+dp[i-1][j-wt[i-1]]);
            }
        }
    }
    return dp[n][W];
}

int main()
{
    int wt[]={5,4,6,3};
    int val[]={10,40,30,50};
    int n=sizeof(val)/sizeof(val[0]);
    int W=10;
    cout<<knapSack(W,wt,val,n)<<endl;
    cout<<dpKnapSack(W,wt,val,n)<<endl;
    return 0;
}