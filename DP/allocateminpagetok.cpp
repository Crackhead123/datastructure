#include<bits/stdc++.h>
using namespace std;

int sum(int arr[],int b, int e){
    int s=0;
    for(int i=b;i<=e;i++)
        s+=arr[i];
    return s;
}

int minPages(int arr[],int n, int k){
    if(k==1)
        return sum(arr,0,n-1);
    if(n==1)
        return arr[0];
    int res=INT_MAX;
    for(int i=1;i<n;i++){
        res=min(res,max(minPages(arr,i,k-1),sum(arr,i,n-1)));
    }
    return res;
}

int dpMinPage(int a[],int n,int k)
{
    int dp[k+1][n+1];
    for(int i=1;i<=n;i++)
    {
        dp[1][i]=sum(a,0,i-1);
    }
    for(int j=1;j<=k;j++)
    {
        dp[j][1]=a[0];
    }

    for(int i=2;i<=k;i++)
    {
        for(int j=2;j<=n;j++)
        {
            int res=INT_MAX;
            for(int p=1;p<j;p++)
            {
                res=min(res,max(dp[i-1][p],sum(a,p,j-1)));
            }
            dp[i][j]=res;
        }
    }
    return dp[k][n];
}

int main()
{
    int a[]={10,20,10,30};
    int n=sizeof(a)/sizeof(a[0]);
    int k=2;
    cout<<minPages(a,n,k)<<endl;
    cout<<dpMinPage(a,n,k)<<endl;
    return 0;
}