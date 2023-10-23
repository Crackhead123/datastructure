#include<bits/stdc++.h>
using namespace std;

int maxDiff(int a[],int n)
{
    int res=INT_MIN;
    int max_element=a[0];
    int min_element=a[0];
    for(int i=1;i<n;i++)
    {
        if(a[i]>min_element){
        max_element=max(max_element,a[i]);
        min_element=min(min_element,a[i]);
        res=max(max_element-min_element,res);
        }
    }
    return res;
}

int main()
{
    int a[]={2,3,10,6,4,8,1};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<maxDiff(a,n);
    return 0;
}