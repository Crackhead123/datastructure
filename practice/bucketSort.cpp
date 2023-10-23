#include<bits/stdc++.h>
using namespace std;

void bucketSort(int a[],int n,int k)
{
    int max_e=a[0];
    for(int i=1;i<n;i++)
    {
        max_e=max(max_e,a[i]);
    }
    max_e++;
    vector<int> bkt[k];
    for(int i=0;i<n;i++)
    {
        int bi=(a[i]*k)/max_e;
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

void printArray(int *a,int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
int main()
{
    int n;
    cout<<"Enter the size of the array:";
    cin>>n;
    int *arr=new int[n];
    cout<<"Enter elements in the array:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int k;
    cout<<"Enter the size of the bucket:";
    cin>>k;
    bucketSort(arr,n,k);
    printArray(arr,n);
    return 0;
}