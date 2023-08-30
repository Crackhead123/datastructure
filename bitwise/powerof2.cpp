#include<bits/stdc++.h>
using namespace std;

bool powerof2(int n)
{
    if(n&&(n&(n-1))==0)
    {
        return true;
    }
    else 
    {
        return false;
    }
}


int main()
{
    int n=16;
    if(powerof2(n)==true)
    {
        cout<<"True";
    }
    else 
    {
        cout<<"False";
    }
    return 0;
}