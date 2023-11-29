#include<bits/stdc++.h>
using namespace std;


int maxGuest(int arr[],int dep[],int m)
{
    sort(arr,arr+m);
    sort(dep,dep+m);
    int res=0,curr=1,i=1,j=0;
    while(i<m&&j<m)
    {
        if(arr[i]<=dep[j])
        {
            curr++;
            i++;
        }
        else
        {
            curr--;
            j++;
        }
        res=max(res,curr);
    }
    return res;
}

int main()
{
    int arr[]  = {1, 2, 10, 5, 5};
    int dep[]  = {4, 5, 12, 9, 12};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"The number of minimum guest are:"<<maxGuest(arr,dep,n);
    return 0;
}