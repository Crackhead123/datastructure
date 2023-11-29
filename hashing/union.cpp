#include<bits/stdc++.h>
using namespace std;

void union_Array(int a[],int b[],int n,int m)
{
    unordered_set<int>s;
    for(int i=0;i<n;i++)
    {
        s.insert(a[i]);
    }
    for(int i=0;i<m;i++)
    {
        s.insert(b[i]);
    }

    for(auto x : s)
    {
        cout<<x<<" ";
    }
}

int main()
{
    int arr1[] = {2, 8, 3, 5, 6};
    int arr2[] = {4, 8, 3, 6, 1};
    int m = sizeof(arr1)/sizeof(arr1[0]);
    int n = sizeof(arr2)/sizeof(arr2[0]);
    union_Array(arr1,arr2,m,n);
    return 0;
}