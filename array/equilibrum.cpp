#include<bits/stdc++.h>
using namespace std;

bool equalSum(int a[],int n)
{
    int rSum=0;
    for(int i=0;i<n;i++)
    {
        rSum+=a[i];
    }
    int lSum=0;
    for(int i=0;i<n;i++)
    {
        rSum-=a[i];
        if(lSum==rSum)
        {
            return true;
        }
        lSum+=a[i];
    }
    return false;
}