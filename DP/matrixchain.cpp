#include<bits/stdc++.h>
using namespace std;

int matrix(int a[],int i,int j)
{
    if(i+1==j)
    return 0;
    int res=INT_MAX;
    for(int k=i+1;k<j;k++)
    {
        //min because we have to select minimum multiplication matrix;
        res=min(res,matrix(a,i,k)+matrix(a,k,j)+a[i]*a[k]*a[j]);
    }
    return res;
}
int dpMatrix(int a[],int n)
{
    int dp[n][n];
    for(int i=0;i<n;i++)
    {
        dp[i][i+1]=0;
    }
    for(int g=2;g<=n;g++)
    {
        for(int i=0;i+g<n;i++)
        {
            int j=i+g;
            dp[i][j] = INT_MAX;
            for(int k=i+1;k<j;k++)
            {
                dp[i][j]=min(dp[i][j],dp[i][k]+dp[k][j]+a[i]*a[k]*a[j]);
            }
        }
    }
    return dp[0][n-1];
}

int main()
{
    int a[]={2,1,3,4};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<matrix(a,0,n-1)<<endl;
    cout<<dpMatrix(a,n);
    return 0;
}