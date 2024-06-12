#include<bits/stdc++.h>
using namespace std;
void solve(vector<vector<int>>&ans,int start,vector<int>&temp,vector<int>&a,int k)
{
    if(k==0)
    {
        ans.push_back(temp);
        return;
    }
    for(int i=start;i<a.size();i++)
    {
        if(i>start&&a[i]==a[i-1])
        continue;
        if(a[i]>k)
        {
            break;
        }
        temp.push_back(a[i]);
        solve(ans,i+1,temp,a,k-a[i]);
        temp.pop_back();
    }
}
vector<vector<int>> combinationSum2(vector<int>& candidates, int target)
{
    vector<vector<int>>res;
    vector<int>temp;
    int i=0;
    solve(res,i,temp,candidates,target);
    return res;
}
int main()
{
    vector<int>candidates = {10,1,2,7,6,1,5};int target = 8;
    sort(candidates.begin(),candidates.end());
    vector<vector<int>>res=combinationSum2(candidates,target);
    for(int i=0;i<res.size();i++)
    {
        for(int j=0;j<res[i].size();j++)
        {
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}