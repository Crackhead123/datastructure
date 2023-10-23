#include<bits/stdc++.h>
using namespace std;

void frequency(int a[],int n)
{
    int freq=1,i=1;
    while(i<n)
    {
        while(i<n&&a[i]==a[i-1])
        {
            freq++;
            i++;
        }
        cout<<a[i-1]<<" "<<freq<<endl;
        i++;
        freq=1;
    }
    if(n==1||a[n-1]!=a[n-2])
    {
        cout<<a[n-1]<<" "<<1;
    }
}
int main()
{
    int a[]={10,50,50,50};
    int n=sizeof(a)/sizeof(a[0]);
    frequency(a,n);
    return 0;
}