#include<bits/stdc++.h>
using namespace std;

struct Interval
{
    int start;
    int end;
};


bool mycom(Interval i1,Interval i2)
{
    return (i1.start<i2.start);
}

void overlapInterval(Interval a[],int n)
{
    sort(a,a+n,mycom);
    int res=0;
    for(int i=1;i<n;i++)
    {
        if(a[res].end<=a[i].end)
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
    Interval a[]={ {5,10}, {3,15}, {18,30}, {2,7} }; 
    int n=sizeof(a)/sizeof(a[0]);
    overlapInterval(a,n);
    return 0;
}