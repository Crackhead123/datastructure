#include<bits/stdc++.h>
#include<vector>
using namespace std;

int largest(int a[],int n)
{
    int large=0,index;
    for(int i=0;i<n;i++)
    {
        if(large<a[i])
        {
            large=a[i];
            index=i;
        }
    }
    return index+1;
}



int main()
{
    int a[]={87,864,74,642,1};
    int n=sizeof(a)/sizeof(a[0]);

    cout<<"The largest element in the array is found at the position:"<<largest(a,n);
    return 0;
}