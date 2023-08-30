#include<bits/stdc++.h>
using namespace std;

int f(int x)
{
    if(x<1)
    return 1;
    else
    return (f(x-1)+g(x));
}

int g(int x)
{
    if(x<2)
    return 2;
    else 
    return (f(x-1)+g(x/2));
}

int main()
{
    int x=5;
    cout<<f(x);
}