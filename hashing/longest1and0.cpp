#include<bits/stdc++.h>
using namespace std;

int largestZeroSubarray(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]==0)
        a[i]=-1;
    }
    unordered_map<int,int>s;
    int presum=0;
    int res=0;
    for(int i=0;i<n;i++)
    {
        presum+=a[i];
        if(presum==0)
        res=i+1;
        if(s.find(presum)!=s.end())
        res=max(res,i-s[presum]);
        else
        s[presum]=i;
    }
    return res;
}
int main()
{
    int arr[] = {1, 1, 1, 0, 1, 0, 1, 1, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    cout << largestZeroSubarray(arr, n);
}