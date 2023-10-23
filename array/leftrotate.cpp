#include<bits/stdc++.h>
using namespace std;

void leftRotate(int a[],int n)
{
    int end=n-1;
    int temp=a[0];
    for(int i=1;i<n;i++)
    {
        a[i-1]=a[i];
    }
    a[end]=temp;
}

int main()
{
    int a[]={1,2,3,4,5};
    int n=5;
    leftRotate(a,n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}