#include<bits/stdc++.h>
using namespace std;

bool myComp(pair<int,int>a,pair<int,int>b)
{
    return a.first<b.first;
}
int maxBridge(vector<pair<int,int>>arr,int n)
{
    sort(arr.begin(),arr.end(),myComp);
    int len[n];
    len[0]=1;
    for(int i=1;i<n;i++)
    {
        len[i]=1;
        for(int j=0;j<i;j++)
        {
            if(arr[i].second>arr[j].second)
            {
                len[i]=max(len[i],len[j]+1);
            }
        }
    }
    int res=len[0];
    for(int i=1;i<n;i++)
    {
        res=max(res,len[i]);
    }
    return res;
}
int main()
{
    vector<pair<int,int>>a={{6,2}, {4,3}, {1,5}, {2,6}};
    int n=a.size();
    cout<<maxBridge(a,n);
    return 0;
}