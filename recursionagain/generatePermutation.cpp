#include<bits/stdc++.h>
using namespace std;


vector<vector<int>>permutation(vector<int>&nums)
{
    vector<vector<int>>ans;
    int num = nums.size();
    for(int i=0;i<(1<<num);i++)
    {
        vector<int>temp;
        for(int j=0;j<num;j++)
        {
            if(i&(1<<j))
            temp.push_back(nums[j]);
        }
        if(temp.size()>=0)
        ans.push_back(temp);
    }
    return ans;
}

int main()
{
    vector<int>nums={1,2,3};
    vector<vector<int>>ans=permutation(nums);
    for(int i=0;i<ans.size();i++)
    {
        cout<<"[";
        for(int j=0;j<ans[i].size();j++)
        {
            cout<<ans[i][j];
        }
        cout<<"]";
        cout<<endl;
    }
    return 0;
}