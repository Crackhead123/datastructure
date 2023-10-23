#include<bits/stdc++.h>
using namespace std;

    int main()
    {
        int arr[] = {1,4 ,45, 6 ,10, 8};
        int k=13;
        int n=sizeof(arr)/sizeof(arr[0]);
        sort(arr,arr+n);
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        return 0;

    }