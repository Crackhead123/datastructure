#include<bits/stdc++.h>
using namespace std;

void divisor(int n)
{
    int i;
    for(i=1;i*i<n;i++)
    {
        if(n%i==0)
        cout<<i<<" ";
    }
    for(;i>=1;i--)
    {
        if(n%i==0)
        cout<<n/i<<" ";
    }
}

int main()
{
    int n;
    cout<<"Enter a number:";
    cin>>n;
    cout<<"The divisor of the given numbers are:"<<endl;
    divisor(n);
    return 0;
}