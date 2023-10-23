#include<bits/stdc++.h>
using namespace std;

int subarrayEvenOrOdd(int a[],int n)
{
    int count=1;
    int res=1;
    for(int i=1;i<n;i++)
    {
        if((a[i-1]%2==0&&a[i]%2!=0)||(a[i-1]%2!=0&&a[i]%2==0))
        {
            count++;
            res=max(res,count);
        }
        else
        count=1;
    }
    return res;
}
int main()
{
    int a[]={1, 3, 5};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<subarrayEvenOrOdd(a,n);
    return 0;
}