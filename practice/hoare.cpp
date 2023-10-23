#include<bits/stdc++.h>
using namespace std;

void segR(int a[],int l,int h)
{
    int i=l-1,j=h+1;
    while(true)
    {
        do
        {
            i++;
        }while(a[i]<0);
        do
        {
            j--;
        }while(a[j]>=0);
        if(i>=j)
        {
            return;
        }
        swap(a[i],a[j]);
    }
}
int main()
{
    int a[]={15,-13,-12,18};
    int n=4;
    segR(a, 0 ,n - 1 );
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}