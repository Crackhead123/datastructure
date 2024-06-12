//Minimum deletion to sorted a array

#include<bits/stdc++.h>
using namespace std;    

int ceilVal(int a[],int l,int r,int x)
{
    while(r>l)
    {
        int m=l+(r-l)/2;
        if(a[m]>=x)
        {
            r=m;
        }
        else
        {
            l=m+1;
        }
    }
    return r;
}

int LIS(int a[],int n)
{
    int tail[n];
    tail[0]=a[0];
    int len=1;
    for(int i=1;i<n;i++)
    {
        if(a[i]>=tail[len-1])
        {
            tail[len]=a[i];
            len++;
        }
        else
        {
            int c=ceilVal(tail,0,len-1,a[i]);
            tail[c]=a[i];
        }
    }
    return len;
}
int main()
{
    int a[]={5,10,3,6,7,8};
    int n=sizeof(a)/sizeof(a[0]);
    int res=n-LIS(a,n);
    cout<<"The Minimum deletion to sort a array is:"<<res<<endl;
    return 0;
}