#include<bits/stdc++.h>
using namespace std;

bool myComp(pair<int,int>a,pair<int,int>b)
{
    double r1=(double)a.first/a.second;
    double r2=(double)b.first/b.second;
    return r1>r2;
}

double fKnaps(pair<int,int>arr[],int w,int n)
{
    sort(arr,arr+n,myComp);
    double res=0.0;
    for(int i=0;i<n;i++)
    {
        if(arr[i].second<=w)
        {
            res+=arr[i].first;
            w-=arr[i].second;
        }
        else
        {
            res+=arr[i].first*((double)w/arr[i].second);
            break;
        }
    }
    return res;
}

int main()
{
    pair<int,int>arr[]={{120,30},{100,20},{60,10}};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<fKnaps(arr,50,n);
    return 0;
}