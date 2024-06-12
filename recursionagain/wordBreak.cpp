#include<bits/stdc++.h>
using namespace std;

bool wordBreak(string s, vector<string>& wordDict)
{
    int n=s.size();
    bool dp[n+1];
    dp[0]=true;
    for(int i=1;i<=n;i++)
    {
        for(string curr:wordDict)
        {
            int cur_len=curr.size();
            if(i>=cur_len&&dp[i-cur_len]==true&&s.substr((i-cur_len),cur_len)==curr){
            dp[i]=true;
            break;
            }
            else
            dp[i]=false;
        }
    }
    return dp[n];
}

int main()
{
    string s="leetcode";
    vector<string>wordDict={"leet","code"};
    cout<<wordBreak(s,wordDict);
    return 0;
}