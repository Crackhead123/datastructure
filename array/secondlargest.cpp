#include<bits/stdc++.h>
using namespace std;

int secondLargest(int a[],int n)
{
    int large=0,res=-1;
    for(int i=1;i<n;i++)
    {
        if(a[i]>a[large])
        {
            res=large;
            large=i;
        }
        else if(a[i]!=a[large])
        {
            if(res==-1||a[i]>a[res])
            {
                res=i;
            }
        }
    }
    return res;
}

int main()
{
    int a[]={1,2,3,4,5,5,6,6,7,7,7,7};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<secondLargest(a,n);
    return 0;

}