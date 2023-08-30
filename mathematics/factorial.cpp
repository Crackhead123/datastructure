#include <bits/stdc++.h>
using namespace std;

int factorial(int n)
{
    int i=n,p=1;
    while(i!=0)
    {
        p*=i;
        i--;
    }
    return p;
}

int main()
{
    int n;
    cout<<"ENTER A NUmber:";
    cin>>n;
    cout<<"The factorial of the given number is:"<<factorial(n);
    return 0;
}