#include<bits/stdc++.h>
using namespace std;

int majorityElement(int a[],int n)
{
    int res=0,count=1;
    for(int i=1;i<n;i++)
    {
        if(a[res]==a[i])
        {
            count++;
        }
        else 
        {
            count--;
        }
        if(count==0)
        {
            res=i;
            count=1;
        }
    }
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(a[res]==a[i])
        {
            c++;
        }
    }
    if(c<=n/2)
        {
            return -1;
        }
    return res;
}


int main()
{
    int a[]={3, 3, 4, 2, 4, 4, 2, 4, 4};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<majorityElement(a,n);
    return 0;
}