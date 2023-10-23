//To shift zeros at the end

#include<bits/stdc++.h>
using namespace std;

void zeroShift(int a[],int n)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=0)
        {
            swap(a[i],a[count]);
            count++;
        }
    }
}
int main()
{
    int a[]={1,0,2,0,4,3,4,5};
    int n=sizeof(a)/sizeof(a[0]);
    zeroShift(a,n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}