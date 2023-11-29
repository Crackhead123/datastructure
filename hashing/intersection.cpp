#include<bits/stdc++.h>
using namespace std;

void intersect(int a[],int b[],int n,int m)
{
    unordered_set<int>s(b,b+m);
    for(int i=0;i<n;i++)
    {
        if(s.find(a[i])!=s.end())
        {
            cout<<a[i]<<" ";
        }
    }
}

int main() {
    int arr1[] = { 10,20};
    int arr2[] = { 20,30 };
    int m = sizeof(arr1) / sizeof(arr1[0]);
    int n = sizeof(arr2) / sizeof(arr2[0]);

    intersect(arr1, arr2, m, n);

    return 0;
}