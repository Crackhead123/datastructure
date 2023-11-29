#include<bits/stdc++.h>
using namespace std;

bool givenSum(int a[],int n,int sum)
{
    unordered_set<int>s;
    int prefix_sum=0;
    for(int i=0;i<n;i++)
    {
        prefix_sum+=sum;
        if(s.find(prefix_sum-sum)!=s.end())
            return true;
        if(prefix_sum==sum)
        return true;

        s.insert(prefix_sum);
    }
    return false;
}

int main()
{
    int a[]={15,2,8,10,-5,-8,6};
    int sum=3;
    int n=sizeof(a)/sizeof(a[0]);
    cout<<givenSum(a,n,sum);
    return 0;
}