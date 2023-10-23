#include<bits/stdc++.h>
using namespace std;

int getWSum(int ps[],int ws[],int l,int r)
{
    if(l==0)
    {
        return ws[r];
    }
    return ws[l]-(l-1)*ps[l];
}
int main()
{
    int a[]={2,3,5,4,6,1};
    int n=6;
    int ps[n],ws[n];
    ps[0]=a[0];
    for(int i=1;i<n;i++)
    {
        ps[i]=a[i]+ps[i-1];
    }
    ws[0]=a[0];
    for(int i=1;i<n;i++)
    {
        ws[i]=(i+1)*a[i]+ws[i-1];
    }
    cout<<getWSum(ps,ws,0,3);
    return 0;
}