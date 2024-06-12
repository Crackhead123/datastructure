#include<bits/stdc++.h>
using namespace std;

void solve(vector<vector<int>>&ans,int i,vector<int>&temp,int k,vector<int>&a)
{
    if(i==a.size())
    {
        if(k==0)
        ans.push_back(temp);

        return;
    }

    if(a[i]<=k)
    {
        temp.push_back(a[i]);
        solve(ans,i,temp,k-a[i],a);
        temp.pop_back();
    }

    solve(ans,i+1,temp,k,a);
}
vector<vector<int>>combinationSum(vector<int>&candidates,int target)
{
    vector<vector<int>>ans;
    vector<int>temp;
    int n=candidates.size();
    int i=0;
    solve(ans,i,temp,target,candidates);
    return ans;
}

int main()
{
    vector<int>candidates = {2,3,6,7};
    int target = 7;
    vector<vector<int>>ans=combinationSum(candidates,target);
    for(int i=0;i<ans.size();i++)
    {
        for(int j=0;j<ans[i].size();j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}