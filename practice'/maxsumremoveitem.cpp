#include<bits/stdc++.h>
using namespace std;
void printArray(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int maxSum(int a[],int n)
{
    int forward[n];
    int backward[n];
    int curr_max=a[0],max_so_far=a[0];
    forward[0]=a[0];
    for(int i=1;i<n;i++)
    {
        curr_max=max(a[i],curr_max+a[i]);
        max_so_far=max(curr_max,max_so_far);
        forward[i]=curr_max;
    }
    curr_max=a[n-1],max_so_far=a[n-1];
    backward[n-1]=a[n-1];
    for(int i=n-2;i>=0;i--)
    {
        curr_max=max(a[i],curr_max+a[i]);
        max_so_far=max(curr_max,max_so_far);
        backward[i]=curr_max;
    }
    int fans=max_so_far;
    for(int i=1;i<n-1;i++)
    {
        fans=max(fans,max(0,forward[i-1])+max(0,backward[i+1]));
    }
    if(fans==0)
    return *max_element(a,a+n);

    return fans;
}
int main()
{
    int a[]={1,2,3,-4,5};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<maxSum(a,n)<<endl;
    return 0;
}