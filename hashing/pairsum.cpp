#include<bits/stdc++.h>
using namespace std;

bool pairSum(int a[],int n,int sum)
{
    unordered_set<int>s;
    for(int i=0;i<n;i++)
    {
        if(s.find(sum-a[i])!=s.end())
        {
            return true;
        }
        else 
        {
            s.insert(a[i]);
        }
    }
    return false;
}


int main()
{
    int a[]={8,3,4,2,5};
    int n=sizeof(a)/sizeof(a[0]);
    int sum=6;
    cout<<pairSum(a,n,sum);
	return 0;
}