#include <iostream>
using namespace std;

int sum1(int n)
{
    if(n<0)
    {
        return 0;
    }
    return n+sum1(n-1);
}

int sum2(int n)
{
    return n*(n+1)/2;
}

int main()
{
    int n;
    n=3;
    cout<<sum1(n)<<endl;
    cout<<sum2(n)<<endl;
}