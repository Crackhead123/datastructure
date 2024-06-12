#include<bits/stdc++.h>
using namespace std;

int minCoin(int a[],int val,int n)
{
    if(val==0)
    return 0;
    int res=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(a[i]<=val)
        {
            int subres=minCoin(a,val-a[i],n);
            if(subres!=INT_MAX)
            {
                res=min(res,subres+1);
            }
        }
    }
    return res;
}

//dp solution
int getMin(int a[],int n,int val)
{
    int dp[val+1];
    dp[0]=0;
    for(int i=1;i<=val;i++)
    {
        dp[i]=INT_MAX;
    }
    for(int i=1;i<=val;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[j]<=val)
            {
                int subres=dp[i-a[j]];
                if(subres!=INT_MAX)
                {
                    dp[i]=min(dp[i],subres+1);
                }
            }
        }
    }
    return dp[val];
}
int main()
{
    int a[]={25,10,5};
    int val=30;
    int n=sizeof(a)/sizeof(a[0]);
    cout<<minCoin(a,val,n)<<endl;
    cout<<getMin(a,n,val);
    return 0;
}