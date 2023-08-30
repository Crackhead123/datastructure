#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int great(int a,int b)
{
    if(b==0)
    {
        return a;
    }
    return great(b,a%b);
}


int main()
{
    int a,b;
    cout<<"Enter the first number:";
    cin>>a;
    cout<<"Enter the second number:";
    cin>>b;
    cout<<"The GCD of the given two numbers are:"<<great(a,b);
    return 0;
}