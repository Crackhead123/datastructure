#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pi;



int minimumSwap(vector<int>&nums)
{
    int count= 0;
    int n=nums.size();
    priority_queue<pi,vector<pi>,greater<pi>>pq;
    for(int i=0;i<n;i++)
    {
        pq.push({nums[i],i});
    }
    for(int i=0;i<n;i++)
    {
        pi top=pq.top();
        pq.pop();
        if(top.first<nums[i])
        {
            swap(nums[i],nums[top.second]);
            count++;
        }
    }
    return count;
}
int main()
{
    vector<int>a{10,19,6,3,5};
    cout<<minimumSwap(a);
    return 0;
    
}