#include<bits/stdc++.h>
using namespace std;

void twoNumber(int a[],int low,int high)
{
    int i=low-1,j=high+1;
    while(true)
    {
        do
        {
            i++;
        }
        while(a[i]==0);
        do
        {
            j--;
        }
        while(a[j]==1);
        if(i>=j)
        {
            return;
        }
        swap(a[i],a[j]);
    }
}
int main()
{
    int a[]={0,1,0,0,1,1};
    int n=sizeof(a)/sizeof(a[0]);
    twoNumber(a,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}