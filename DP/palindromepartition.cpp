#include<bits/stdc++.h>
using namespace std;

bool isPal(string s,int i,int j)
{
    while(j>i)
    {
        if(s[i]==s[j])
        {
            i++;
            j--;
        }
        else
        return false;
    }
    return true;
}
int palPart(string s,int i,int j)
{
    if(isPal(s,i,j))
    return 0;
    int res=INT_MAX;
    for(int k=i;k<j;k++)
    {
        res=min(res,palPart(s,i,k)+palPart(s,k+1,j)+1);
    }
    return res;
}
int dpPalPart(string s,int n)
{
    int dp[n][n];
    for(int i=0;i<n;i++)
    {
        dp[i][i]=0;
    }
    for(int gap=1;gap<n;gap++)
    {
        for(int i=0;i+gap<n;i++)
        {
            int j=gap+i;
            if(isPal(s,i,j))
            dp[i][j]=0;
            else
            {
                dp[i][j]=INT_MAX;
                for(int k=i;k<j;k++)
                {
                    dp[i][j]=min(dp[i][j],dp[i][k]+dp[k+1][j]+1);
                }
            }
        }
    }
    return dp[0][n-1];
}
int main()
{
    string s="abcde";
    int n=s.length();
    cout<<palPart(s,0,n-1)<<endl;
    cout<<dpPalPart(s,n)<<endl;
    return 0;
}