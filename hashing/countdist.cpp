#include<bits/stdc++.h>
using namespace std;

int countDist(int a[],int n)
{
    unordered_set <int> s(a,a+n);
    return s.size();
}

int main()
{
    int a[]={10,20,10,20,30};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<countDist(a,n);
    return 0;
}