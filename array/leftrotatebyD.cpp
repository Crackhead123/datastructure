//Left rotate an array by D

//Time complexity=theta(n)
//Auxillary space=theta(1);

#include<bits/stdc++.h>
using namespace std;

void reverse(int a[],int low,int high)
{
    while(low<high)
    {
        swap(a[low],a[high]);
        low++;
        high--;
    }
}

void leftRotateByD(int a[],int n,int d)
{
    reverse(a,0,d-1);
    reverse(a,d,n-1);
    reverse(a,0,n-1);
}

int main()
{
     int a[]={1,2,3,4,5};
    int n=5;
    int d=2;
    leftRotateByD(a,n,d);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}