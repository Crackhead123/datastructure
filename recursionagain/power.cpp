#include<bits/stdc++.h>
using namespace std;

double power(int x,int n)
{
    if(n==0)
    return 1;
    if(n==1)
    return x;
    double k;
    if(n>=0)
    k=power(x,n/2);
    else
    k=power(x,(n/2)*(-1));

    if(n%2==0)
    {
        if(n>=0)
        return k*k;
        else
        return 1/(k*k);
    }
    else
    {
        if(n>=0)
        return k*k*x;
        else
        return 1/(k*k*x);
    }
    return k;
}
long long mod=1e9+7;
long long binaryPow(long long x,long long n)
{
    long long ans=1;
    while(n>0)
    {
        if(n&1)
        ans=(ans*x)%mod;
        x=(x*x)%mod;
        n/=2;
    }
    return ans%mod;
}
int main()
{
    int x=2,n=10;
    cout<<power(x,n)<<endl;
    cout<<binaryPow(x,n);
    return 0;
}