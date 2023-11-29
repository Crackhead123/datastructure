#include<bits/stdc++.h>
using namespace std;


void countSort(int a[],int n,int k)
{
    int count[k];
    for(int i=0;i<k;i++)
    {
        count[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        count[a[i]]++;
    }
    for(int i=1;i<k;i++)
    {
        count[i]=count[i-1]+count[i];
    }

    int output[n],index=0;

    for(int i=0;i<n;i++)
    {
        output[count[a[i]]-1]=a[i];
        count[a[i]]--;
    }

    for(int i=0;i<n;i++)
    {
        a[index++]=output[i];
    }
}
void printArray(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
int main()
{
    int arr[] = { 1,4,4,1,0,1 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    int k=5;
    countSort(arr, n, k);
    printArray(arr,n);
    return 0;

}