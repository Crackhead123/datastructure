#include<bits/stdc++.h>
using namespace std;

void bucketSort(int a[],int n,int k)
{
    int maxVal=a[0];
    for(int i=1;i<n;i++)
    {
        maxVal=max(maxVal,a[i]);
    }
    maxVal++;
    vector<int> bkt[k];
    for(int i=0;i<n;i++)
    {
        int bi=(k*a[i])/maxVal;
        bkt[bi].push_back(a[i]);
    }
    for(int i=0;i<k;i++)
    {
        sort(bkt[i].begin(),bkt[i].end());
    }
    int index=0;
    for(int i=0;i<k;i++)
    {
        for(int j=0;j<bkt[i].size();j++)
        {
            a[index++]=bkt[i][j];
        }
    }
}
int main()
{
    int a[]={30,40,10,80,5,12,70};
    int n=sizeof(a)/sizeof(a[0]);
    int k=5;
    bucketSort(a,n,k);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}