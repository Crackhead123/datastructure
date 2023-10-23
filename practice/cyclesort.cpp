#include<bits/stdc++.h>
using namespace std;

void cycleSort(int a[],int n)
{
    for(int cs=0;cs<n-1;cs++)
    {
        int item=a[cs];
        int pos=cs;
        for(int i=cs+1;i<n;i++)
        {
            if(a[i]<item)
            {
                pos++;
            }
        }
        swap(item,a[pos]);
        while(pos!=cs)
        {
            pos=cs;
            
            for(int j=cs+1;j<n;j++)
            {
                if(a[j]<item)
                {
                    pos++;
                }
            }
            swap(item,a[pos]);
        }
    }
}

int main()
{
    int a[]={40,30,20,10,40,5,10,5,1};
    int n=sizeof(a)/sizeof(a[0]);
    cycleSort(a,n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}