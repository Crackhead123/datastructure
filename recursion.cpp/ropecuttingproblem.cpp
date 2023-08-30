#include<bits/stdc++.h>
using namespace std;

int ropecutting(int n,int a,int b,int c)
{
    if(n<0)
    return -1;

    if(n==0)
    return 0;

    int res=max(ropecutting(n-a,a,b,c),max(ropecutting(n-b,a,b,c),ropecutting(n-c,a,b,c)));
    if(res==-1)
    return -1;

    return res+1;
}

int main()
{
    int n=23,a=11,b=9,c=12;
    cout<<ropecutting(n,a,b,c);
    return 0;
}