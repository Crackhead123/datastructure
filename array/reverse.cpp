#include<bits/stdc++.h>
using namespace std;

void reverse(int a[],int n)
{
    int start=0,end=n-1;
    while(start<end)
    {
        int temp=a[start];
        a[start]=a[end];
        a[end]=temp;
        start++;
        end--;
    }
}
int main()
{
    int a[]={1,2,3,4,5,6};
    int n=6;
    reverse(a,n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}