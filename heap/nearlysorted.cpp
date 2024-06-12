#include<bits/stdc++.h>
using namespace std;

void nearlySort(int arr[],int n,int k)
{
    priority_queue<int,vector<int>,greater<int>>p;
    for(int i=0;i<k;i++)
    {
        p.push(arr[i]);
    }
    for(int i=k;i<n;i++)
    {
        if(p.top()>arr[i])
        {
            p.push(arr[i]);
        }
        else
        {
            cout<<p.top()<<" ";
            p.pop();
            p.push(arr[i]);
        }
    }
    while(!p.empty())
    {
        cout<<p.top()<<" ";
        p.pop();
    }
}

int main ()
{
    int arr[]={6,5,3,2,8,10,9};
    int n=7;
    int k=3;
    nearlySort(arr,n,k);
    return 0;
}