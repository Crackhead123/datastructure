#include<bits/stdc++.h>
using namespace std;

int countOne(int a[],int n)
{
    int res=0, count=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==1)
        {
            count++;
            if(res<count)
            {
                res=count;
            }
        }
        else
        {
            count=0;
        }
    }
    return res;
}


int main()
{
    int a[]={0,1,1,0,1,1,1};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<countOne(a,n);
    return 0;
}