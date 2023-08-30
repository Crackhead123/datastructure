#include<bits/stdc++.h>
using namespace std;

int table[256];

void initialize()
{
    table[0]=0;
    for(int i=0;i<256;i++)
    {
        table[i]= (i&1)+table[i/2];
    }
}

int countSetBit(int n)
{
    return table[n&0xff]+table[(n>>8)&0xff]+table[(n>>16)&0xff]+table[(n>>24)];
}

int main()
{
    int n=3;
    initialize();
    cout<<countSetBit(n);
    return 0;
}