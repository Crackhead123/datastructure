#include<bits/stdc++.h>
using namespace std;

void printCount(int a[],int n,int k)
{
    unordered_map<int,int>m;
    for(int i=0;i<n;i++)
    {
        m[a[i]]+=1;
    }
    for(auto x:m)
    {
        if(x.second>n/k)
        {
            cout<<x.first<<" ";
        }
    }
}

int main ()
{
    int a[]={10,20,30,10,10,20};
    int n=sizeof(a)/sizeof(a[0]);
    int k=3;
    printCount(a,n,k);
    return 0;
}