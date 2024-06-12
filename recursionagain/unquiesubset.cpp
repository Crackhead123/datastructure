#include<bits/stdc++.h>
using namespace std;

void solve(set<vector<int>>&ans,int start,vector<int>&temp,vector<int>&nums)
{
    if(!temp.empty())
    ans.insert(temp);
    for(int i=start;i<nums.size();i++)
    {
        if(i>start&&nums[i]==nums[i-1])
        continue;

        temp.push_back(nums[i]);
        solve(ans,i+1,temp,nums);
        temp.pop_back();
    }
}
vector<vector<int>> subsetsWithDup(vector<int>& nums)
{
    set<vector<int>>ans;
    vector<int>temp;
    int start=0;
    solve(ans,start,temp,nums);
    vector<vector<int>>res;
    for(auto v:ans)
        res.push_back(v);
    return res;
}

int main()
{
    vector<int>nums={1,2,2};
    vector<vector<int>>ans=subsetsWithDup(nums);
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