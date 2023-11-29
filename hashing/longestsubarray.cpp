#include<bits/stdc++.h>
using namespace std;

int longSubarray(int a[],int n,int sum)
{
    unordered_map<int,int>s;
    int prefix_sum=0,res=0;
    for(int i=0;i<n;i++)
    {
        prefix_sum+=a[i];
        if(prefix_sum==sum)
        res=i+1;
        if(s.find(prefix_sum)==s.end())
        s.insert({prefix_sum,i});
        if(s.find(prefix_sum-sum)!=s.end())
        {
            res=max(res,i-s[prefix_sum-sum]);
        }
    }
    return res;
}

int main() {
            int arr[] = {8, 3, 1, 5, -6, 6, 2, 2};
            int n = sizeof(arr)/sizeof(arr[0]);
            int sum = 4;
            cout << longSubarray(arr, n, sum);
            }