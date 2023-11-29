#include<bits/stdc++.h>
using namespace std;

bool subarraySum(int a[],int n)
{
    unordered_set<int>s;
    int prefix_sum=0;
    for(int i=0;i<n;i++)
    {
        prefix_sum+=a[i];
        if(s.find(prefix_sum)!=s.end())
            return true;
        if(prefix_sum==0)
            return true;
        s.insert(prefix_sum);
    }
    return false;
}

int main()
{
    int a[]={-3,4,-3,-1,1};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<subarraySum(a,n);
    return 0;
}