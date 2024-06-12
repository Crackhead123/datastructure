#include<bits/stdc++.h>
using namespace std;

int game(int a[],int i,int j)
{
    if(i+1==j)
    return max(a[i],a[j]);
    
    return max(a[i]+min(game(a,i+2,j),game(a,i+1,j-1)),a[j]+min(game(a,i,j-2),game(a,i+1,j-1)));
}

int dpGame(int a[],int n)
{
    int dp[n][n];
    for(int i=0;i<n-1;i++)
    {
        dp[i][i+1]=max(a[i],a[i+1]);
    }
    for(int gap=3;gap<n;gap=gap+2)
    {
        for(int i=0;i+gap<n;i++)
        {
            int j=gap+i;
            dp[i][j]=max(a[i]+min(dp[i+2][j],dp[i+1][j-1]),a[j]+min(dp[i][j-2],dp[i+1][j-1]));
        }
    }
    return dp[0][n-1];
}
int main()
{
    int a[]={20,5,4,6};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<game(a,0,n-1);
    return 0;
}