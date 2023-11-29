#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int>&a,pair<int,int>&b)
{
    if(a.second==b.second)
    return a.first<b.first;
    
    return a.second>b.second;
}
vector<int>freqSort(int a[],int n)
{
    vector<int>res;
    vector<pair<int,int>>curr;
    map<int,int>m;
    for(int i=0;i<n;i++)
    {
        m[a[i]]++;
    }
    for(auto &x:m)
    {
        curr.push_back(x);
    }
    sort(curr.begin(),curr.end(),cmp);
    for(int i=0;i<curr.size();i++)
    {
        for(int j=0;j<curr[i].second;j++)
        {
            res.push_back(curr[i].first);
        }
    }
    return res;
}


int main()
{
    int A[] = {3,2,3,2,4,5};
    int n=sizeof(A)/sizeof(A[0]);
    vector<int>ans;
    ans=freqSort(A,n);
    for(auto x:ans)
    {
        cout<<x<<" ";
    }
    return 0;
}