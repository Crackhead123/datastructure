#include<bits/stdc++.h>
using namespace std;    

int getMin(int a[],int n,int val)
{
    if(val==0)
    return 0;
    int res=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(a[i]<=val)
        {
            int sub_res=getMin(a,n,val-a[i]);
            if(sub_res!=-1)
            res=min(res,sub_res+1);
        }
    }
    return res;
}
//DP Solution
int dpGetMin(int a[],int n,int val)
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
            if(a[j]<=i)
            {
                int sub_res=dp[i-a[j]];
                if(sub_res!=INT_MAX)
                {
                    dp[i]=min(dp[i],sub_res+1);
                }
            }
        }
    }
    return dp[val];
}

int main()
{
    int a[]={25,10,5};
    int  n = sizeof(a)/sizeof(a[0]);
    int val=30;
    cout<<getMin(a,n,val)<<endl;
    cout<<dpGetMin(a,n,val)<<endl;
    return 0;
}