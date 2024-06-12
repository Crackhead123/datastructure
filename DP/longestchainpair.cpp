#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int longChain(vector<pair<int,int>>a,int n)
{
    pair<int,int>res[n];
    sort(a.begin(), a.end());
    res[0].first =a[0].first;
    res[0].second =a[0].second;
    int len=1;
    for(int i=1;i<n;i++)
    {
        if(a[i].first>res[len-1].second)
        {
            res[len].first =a[i].first;
            res[len].second =a[i].second;  
            len++;
        }
    }
    return len;
}

int main()
{
    vector<pair<int,int>>a={{5,24},{39,60},{15,28},{27,40},{50,90}};
    int n=a.size();
    cout<<longChain(a,n);
    return 0;
}