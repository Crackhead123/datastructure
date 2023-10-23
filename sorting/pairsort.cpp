#include<bits/stdc++.h>
using namespace std;

struct Interval
{
    int start,end;
};

bool myCon(Interval i1,Interval i2)
{
    return (i1.start<i2.start);
}

void mergeInterval(Interval a[],int n)
{
    sort(a,a+n,myCon);
    int res=0;
    for(int i=1;i<n;i++)
    {
        if(a[res].end>=a[i].start)
        {
            a[res].start=min(a[res].start,a[i].start);
            a[res].end=max(a[res].end,a[i].end);
        }
        else
        {
            res++;
            a[res]=a[i];
        }
    }
    for(int i=0;i<=res;i++)
    {
        cout<<a[i].start<<" "<<a[i].end<<endl;
    }
}

int main()
{
    Interval a[]={{1,}}
}