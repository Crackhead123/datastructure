#include<bits/stdc++.h>
using namespace std;

int longestSubseq(int a[],int n)
{
    unordered_set<int>s(a,a+n);
    int res=1;
    for(auto x:s)
    {
        if(s.find(x-1)==s.end())
        {
            int curr=1;
            while(s.find(x+curr)!=s.end())
            curr++;
            res=max(res,curr);
        }
    }
    return res;
}

int main()
{
    int a[]={1,3,9,2,8,2};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<longestSubseq(a,n);
    return 0;
}