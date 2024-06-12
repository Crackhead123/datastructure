#include<bits/stdc++.h>
using namespace std;
long long int mod=1e9+7;
void fun(int start,int a[],int n,int sum,int &count)
{
    if(sum==0)
    {
        count++;
        return;
    }
    for(int i=start;i<n;i++)
    {
        fun(i+1,a,n,sum-a[i],count);
    }
}
int perfectSum(int arr[], int n, int sum)
{
    int count=0;
    fun(0,arr,n,sum,count);
    return count%mod;
}

int dpSolution(int a[],int n,int sum)
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
    int N = 5;
    int arr[] = {2, 5, 1, 4, 3};
    int sum = 10;
    cout<<perfectSum(arr,N,sum);
    cout<<endl;
    cout<<dpSolution(arr,N,sum);
    return 0;
}