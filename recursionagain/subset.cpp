#include<bits/stdc++.h>
using namespace std;

void fun(int start,vector<int>&ans,vector<int>arr,int n,int &sum)
{
    if(start==arr.size())
    return;
    for(int i=start;i<n;i++)
    {
        sum+=arr[i];
        ans.push_back(sum);
        fun(i+1,ans,arr,n,sum);
        sum-=arr[i];
    }
}
vector<int> subsetSums(vector<int> arr, int n)
{
    vector<int>ans;
    ans.push_back(0);
    sort(arr.begin(),arr.end());
    int sum=0;
    fun(0,ans,arr,n,sum);
    sort(ans.begin(),ans.end());
    return ans;
}

int main()
{
    vector<int>arr={2, 3};
    int n=arr.size();
    vector<int>ans=subsetSums(arr,n);
    for(auto x:ans)
    {
        cout<<x<<" ";
    }
    return 0;
}