#include<bits/stdc++.h>
using namespace std;    

bool myComp(pair<int,int>a,pair<int,int>b)
{
    return a.second<b.second;
}

int activitySelect(int start[],int end[],int n)
{
    pair<int,int>arr[n];
    for(int i=0;i<n;i++)
    {
        arr[i].first = start[i];
        arr[i].second = end[i];
    }
    sort(arr,arr+n,myComp);
    int res=1,prev=0;
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
    int start[] = {2, 1};
    int end[] = {2, 2};
    int n=sizeof(start)/sizeof(start[0]);
    cout<<activitySelect(start,end,n);
    return 0;
}