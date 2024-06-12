#include<bits/stdc++.h>
using namespace std;

void solve(vector<vector<int>>&ans,int start,int k,int n,vector<int>&temp)
{
    if(k==0)
    {
        if(n==0)
        {
            ans.push_back(temp);
        }
    }
    for(int i=start;i<10;i++)
    {
        temp.push_back(i);
        solve(ans,i+1,k-1,n-i,temp);
        temp.pop_back();
    }
}
vector<vector<int>> combinationSum3(int k, int n)
{
    vector<vector<int>>ans;
    vector<int>temp;
    int start=1;
    solve(ans,start,k,n,temp);
    return ans;    
}
int main()
{
    int k=3,n=7;
    vector<vector<int>>ans=combinationSum3(k,n);
    for(auto x:ans)
    {
        for(auto y:x)
        {
            cout<<y<<" ";
        }
        cout<<endl;
    }
    return 0;
}