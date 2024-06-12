#include<bits/stdc++.h>
using namespace std;

bool myComp(pair<int,int>& a, pair<int,int>& b)
{
    return a.second<b.second;
}

int maxActivity(pair<int,int>arr[],int n)
{
    sort(arr,arr+n,myComp);
    int prev=0;
    int res=1;
    for(int curr=1;curr<n;curr++)
    {
        if(arr[curr].first>=arr[prev].second)
        {
            res++;
            prev=curr;
        }
    }
    return res;
}

int main()
{
    pair<int,int>arr[]={{3,8},{2,4},{1,3},{10,11}};
    cout<<"Maximum number of activities that can be performed is "<<maxActivity(arr,4);
    return 0;
}