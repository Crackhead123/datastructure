#include<bits/stdc++.h>
using namespace std;

void printDistinct(int a[],int n,int k)
{
    map<int,int>m;
    for(int i=0;i<k;i++)
    {
        m[a[i]]+=1;
    }
    cout<<m.size()<<" ";
    for(int i=k;i<n;i++)
    {
        m[a[i-k]]-=1;
        if(m[a[i-k]]==0)
        {
            m.erase(a[i-k]);
        }
        m[a[i]]+=1;
        cout<<m.size()<<" ";
    }
}
int main()
{
    int arr[] = {10, 10, 5, 3, 20, 5};
   
    int n = sizeof(arr)/sizeof(arr[0]);
    int k=4;
    printDistinct(arr, n, k);
}