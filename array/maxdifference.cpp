#include<bits/stdc++.h>
using namespace std;

int maxDiff2(int a[],int n)
{
    int res=a[1]-a[0],minVal=a[0];
    for(int j=1;j<n;j++)
    {
        res=max(res,a[j]-minVal);
        minVal=min(minVal,a[j]);
    }
    return res;
}
int main()
{
    int a[]={2,3,10,6,4,8,1};
    int n=7;
    cout<<maxDiff2(a,n);
    return 0;
}