#include<bits/stdc++.h>
using namespace std;

int trailzero(int n)
{
    int res=0;
    for(int i=5;i<=n;i=i*5)
    {
        res=res+n/i;
    }
    return res;
}

int main()
{
    int n;
    cout<<"Enter a number:";
    cin>>n;
    cout<<"The number of zero in the factorial of the input number:"<<trailzero(n);
    return 0;
}