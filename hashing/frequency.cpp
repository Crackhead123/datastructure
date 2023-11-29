#include<bits/stdc++.h>
using namespace std;

void frequency(int a[],int n)
{
    unordered_map<int,int> s;
    for(int i=0;i<n;i++)
    {
        s[a[i]]++;
    }

    for(auto it=s.begin();it!=s.end();it++)
    {
        cout<<(it->first)<<" "<<(it->second)<<endl;
    }
}

int main()
{
    int a[]={10,12};
    int n=sizeof(a)/sizeof(a[0]);
    frequency(a,n);
    return 0;
}